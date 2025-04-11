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
            self.ser = serial.Serial("/dev/ttyS0", 115200, timeout=0.01)
            self.ser.flushInput()
            self.ser.flushOutput()
            time.sleep(1)
            self.get_logger().info("✅ Serial connected to STM32!")
        except Exception as error:
            self.get_logger().error(f"❌ Error initializing serial: {error}")
            return
        
        self.lock = threading.Lock()
        # self.timer = self.create_timer(0.05, self.send_motor_commands)

        self.motor_commands = bytearray([90, 85, 80, 93, 91, 83, 92, 82, 85, 85, 90, 87])

        self.relay_commands = bytearray([10, 10])  # Default to stopped
        self.enabled = False  # Move status from /motor_command

        self.header = bytearray([83])  # STM32 Header
        self.terminators = bytearray([0, 55, 69])  # STM32 Terminators

        self.create_subscription(Stm32Data, '/StmData', self.stm_data_callback, 20)


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
            self.relay_commands = bytearray([200, 200])  # Temporary relay command to set neutral
            self.motor_commands = bytearray([90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90])
            self.release()
            self.enabled = msg.enabled
            # self.release()
        
        self.send_motor_commands()
        

        





    def release(self):
        # self.get_logger().info(f"release")

        start_time = time.time()
        
        while time.time() - start_time < 2:  # Run for 2 seconds
            data_to_stm32 = self.get_data_to_stm32()
            if data_to_stm32:
                with self.lock:
                    self.ser.write(data_to_stm32)
                    # time.sleep(0.25)
                    # self.get_logger().info(f"⏳ Sending: {list(data_to_stm32)}")
            time.sleep(0.05)  # Send every 50ms
        
        self.relay_commands = bytearray([10, 10])  # Turn off relay after 2 seconds
        data_to_stm32 = self.get_data_to_stm32()
        if data_to_stm32:
            with self.lock:
                self.ser.write(data_to_stm32)
                self.get_logger().info("🛑 Motors fully stopped!")



    def send_motor_commands(self):
        """ Sends the motor and relay commands to STM32 """
        try:
            data_to_stm32 = self.get_data_to_stm32()
            if data_to_stm32 is None:
                return

            with self.lock:
                self.ser.write(data_to_stm32)
                self.get_logger().info(f"➡️ Sent to STM32: {list(data_to_stm32)}")
                data_from_stm32 = self.ser.read(19)
                # self.get_logger().info(f"⬅️ Received from STM32: {list(data_from_stm32)}")

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