import rclpy
from rclpy.node import Node
import serial
import time
import threading
from my_parameters.msg import Stm32Data  # Message containing motor values
from my_parameters.msg import MotorParameters  # Message containing move variable
import signal

class MotorSerialNode(Node):
    def __init__(self):
        super().__init__('motor_serial_node')

        try:
            self.ser = serial.Serial("/dev/ttyACM0", 115200, timeout=0.1)
            self.ser.flushInput()
            self.ser.flushOutput()
            time.sleep(1)
            self.get_logger().info("✅ Serial connected to STM32!")
        except Exception as error:
            self.get_logger().error(f"❌ Error initializing serial: {error}")
            return
        
        self.lock = threading.Lock()
        # self.timer = self.create_timer(0.05, self.send_motor_commands)
        self.releasing = False
        self.release_start_time = None
        self.motor_commands = bytearray([90, 85, 80, 93, 91, 83, 92, 82, 85, 85, 90, 87])

        self.relay_commands = bytearray([10, 10])  # Default to stopped
        self.enabled = False  # Move status from /motor_command

        self.header = bytearray([83])  # STM32 Header
        self.terminators = bytearray([0, 55, 69])  # STM32 Terminators
        self.debug_pub = self.create_publisher(Stm32Data, '/stm_debug', 10)
        self.create_subscription(Stm32Data, '/StmData', self.stm_data_callback, 20)
        self.timer = self.create_timer(0.05, self.timer_callback)
    
    def timer_callback(self):
        self.send_motor_commands()

    def stm_data_callback(self, msg):
        """ Callback function to update motor command values from /StmData """
        self.motor_commands = bytearray([
            msg.motor1_fr, msg.motor2_fr, msg.motor3_fr,
            msg.motor1_fl, msg.motor2_fl, msg.motor3_fl,
            msg.motor1_rr, msg.motor2_rr, msg.motor3_rr,
            msg.motor1_rl, msg.motor2_rl, msg.motor3_rl
        ])

        if self.enabled == False and msg.enabled == True:
            self.relay_commands = bytearray([200, 200])
            self.enabled = msg.enabled
        elif self.enabled == True and msg.enabled == False:
            self.relay_commands = bytearray([200, 200])  # prepare for stop
            self.motor_commands = bytearray([90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90])
            self.releasing = True
            self.release_start_time = time.time()
            # self.release()
            self.enabled = msg.enabled




    def send_motor_commands(self):
        """ Sends the motor and relay commands to STM32 """
        try:
            # If we are in releasing mode
            if self.releasing:
                if time.time() - self.release_start_time > 2.0:
                    # After 2 seconds, fully stop
                    self.relay_commands = bytearray([10, 10])
                    self.releasing = False  # Done releasing

            data_to_stm32 = self.get_data_to_stm32()
            if data_to_stm32 is None:
                return

            with self.lock:
                self.ser.write(data_to_stm32)
                # self.ser.flush()
                time.sleep(0.005)
                data_from_stm32 = self.ser.read(19)
                # self.get_logger().info(f"➡️ Sent: {list(data_to_stm32)} ⬅️ Received: {list(data_from_stm32)}")
            
            # debug_msg = Stm32Data()
            # debug_msg.motor1_fr = int(time.time() * 1000) % 256  # Just to see changing values
            # self.debug_pub.publish(debug_msg)

        except Exception as error:
            self.get_logger().error(f"Error in serial communication: {error}")

    def get_data_to_stm32(self):
        """ Combines all commands into a single bytearray """
        data_to_stm32 = self.header + self.motor_commands + self.relay_commands + self.terminators

        if len(data_to_stm32) != 18:
            # self.get_logger().error("Motor command length incorrect!")
            return None
        
        return data_to_stm32
    def destroy_node(self):
        super().destroy_node()


def main():
    rclpy.init()
    node = MotorSerialNode()

    # Handle termination signals (Ctrl+C & Ctrl+Z)
    def shutdown_handler(signum, frame):
        # node.get_logger().info(f"Received signal {signum}. Stopping safely...")
        node.destroy_node()
        rclpy.shutdown()
        exit(0)  # Ensure the program exits properly

    signal.signal(signal.SIGINT, shutdown_handler)  # Handle Ctrl+C
    signal.signal(signal.SIGTSTP, shutdown_handler)  # Handle Ctrl+Z

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("KeyboardInterrupt detected. Stopping safely...")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()