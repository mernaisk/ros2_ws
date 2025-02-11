import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy  # Import Joy message type
from std_msgs.msg import Float32MultiArray  # Import array message type

class JoySubscriber(Node):
    def __init__(self):
        super().__init__('joy_subscriber')

        # Subscribe to the '/joy' topic
        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.joy_callback,
            10  
        )

        self.publisher_ = self.create_publisher(Float32MultiArray, '/joystick_command', 10)

    def joy_callback(self, msg):
        self.joystick_commands(msg)

    def joystick_commands(self, msg):
        # Convert boolean to float (1.0 for True, 0.0 for False)
        if msg.buttons[4] == 1 and msg.buttons[5] == 0:
            turn_command = 1.0
        elif msg.buttons[4] == 0 and msg.buttons[5] == 1:
            turn_command = 1.0
        else:
            turn_command = 0.0

        if msg.buttons[4] == 1 and msg.buttons[5] == 0:
            turn_angle = math.pi / 2  
        elif msg.buttons[4] == 0 and msg.buttons[5] == 1:
            turn_angle = -math.pi / 2
        else:
            turn_angle = 0.0

        msg_array = Float32MultiArray()
        msg_array.data = [turn_command, turn_angle]  # Store values as an array

        self.publisher_.publish(msg_array)
        # self.get_logger().info(f"Published: {msg_array.data}")

def main(args=None):
    rclpy.init(args=args)
    node = JoySubscriber()
    rclpy.spin(node)  # Keep the node running
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
