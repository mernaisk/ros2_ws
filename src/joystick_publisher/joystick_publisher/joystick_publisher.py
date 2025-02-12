
import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy  # Import Joy message type
from joystick_parameter.msg import Command

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

        self.publisher_ = self.create_publisher(Command, '/joystick_command', 10)

    def joy_callback(self, msg):
        self.joystick_commands(msg)

    def joystick_commands(self, msg):
        # Convert boolean to float (1.0 for True, 0.0 for False)
        if msg.buttons[4] == 1 and msg.buttons[5] == 0:
            turn_command = True
        elif msg.buttons[4] == 0 and msg.buttons[5] == 1:
            turn_command = True
        else:
            turn_command = False

        if msg.buttons[4] == 1 and msg.buttons[5] == 0:
            turn_angle = math.pi / 2  
        elif msg.buttons[4] == 0 and msg.buttons[5] == 1:
            turn_angle = -math.pi / 2
        else:
            turn_angle = 0.0

#     bool position_command
# float32 position_direction

        if msg.axes[2] >= -0.5 and msg.axes[2] <= 0.5 and msg.axes[3] >= -0.5 and msg.axes[3] <= 0.5:
            position_command = False
        else:
            position_command =  True

        if msg.axes[2] >= -0.5 and msg.axes[2] <= 0.5 and msg.axes[3] >= -0.5 and msg.axes[3] <= 0.5:
            position_direction = 0.0
        elif msg.axes[2] == 0 and msg.axes[3] > 0.5 and msg.axes[3] <= 1:
            position_direction = math.pi/2
        elif msg.axes[2] == 0 and msg.axes[3] >= -1 and msg.axes[3] < -0.5:
            position_direction = -math.pi/2
        elif msg.axes[3] == 0 and msg.axes[2] > 0.5 and msg.axes[2] <= 1:
            position_direction = math.pi
        elif msg.axes[3] == 0 and msg.axes[2] >= -1 and msg.axes[2] < -0.5:
            position_direction = 0.0
        elif msg.axes[2] >= -1 and msg.axes[2] < 0 and msg.axes[3] > 0 and msg.axes[3] <= 1:
            position_direction = math.atan(msg.axes[3]/-msg.axes[2])
        elif msg.axes[2] >= -1 and msg.axes[2] < 0 and msg.axes[3] >= -1 and msg.axes[3] < 0:
            position_direction = math.atan(msg.axes[3]/-msg.axes[2])
        elif msg.axes[2] > 0 and msg.axes[2] <= 1 and msg.axes[3] > 0 and msg.axes[3] <= 1:
            position_direction = math.atan(msg.axes[3]/-msg.axes[2]) + math.pi
        elif msg.axes[2] > 0 and msg.axes[2] <= 1 and msg.axes[3] >= -1 and msg.axes[3] < 0:
            position_direction = math.atan(msg.axes[3]/-msg.axes[2]) - math.pi


        msg_array = Command()
        msg_array.turn_command = turn_command
        msg_array.turn_angle = turn_angle
        msg_array.position_command = position_command
        msg_array._position_direction = position_direction


        self.publisher_.publish(msg_array)
        self.get_logger().info(
            f'Publishing: turn_command={msg_array.turn_command}, '
            f'turn_angle={msg_array.turn_angle}, '
            f'position_command={msg_array.position_command}, '
            f'position_direction={msg_array.position_direction}'
        )

def main(args=None):
    rclpy.init(args=args)
    node = JoySubscriber()
    rclpy.spin(node)  # Keep the node running
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
