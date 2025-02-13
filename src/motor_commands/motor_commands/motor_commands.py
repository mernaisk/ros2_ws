import math
import rclpy
from rclpy.node import Node
from joystick_parameter.msg import Command  # Correct import based on your topic info
from motor_parameter.msg import Command as MotorCommand

class MotorCommandPublisher(Node):
    def __init__(self):
        super().__init__('motor_command_subscriber')

        self.publisher_ = self.create_publisher(MotorCommand, "motor_command", 10)

        self.subscription = self.create_subscription(
            Command,  
            '/joystick_command',
            self.function,
            10
        )


        self.alpha_r_ref = 0
        self.alpha_b_ref = 0.5637
        self.z_l_ref = 0.0012
        self.turn = False

        self.alpha_r_fr
        self.alpha_b_fr
        self.z_l_fr

        self.alpha_r_fl
        self.alpha_b_fl
        self.z_l_fl

        self.alpha_r_rr
        self.alpha_b_rr
        self.z_l_rr

        self.alpha_r_rl
        self.alpha_b_rl
        self.z_l_rl

    def function(self, msg):
        if msg.turn_command == True:
            self.alpha_r_ref = msg.turn_angle
        else:
            self.alpha_r_ref = msg.position_direction

        self.turn = msg.turn_command
        # self.get_logger().info(f'Turn Command: {msg.turn_command}')
        # self.get_logger().info(f'Turn Angle: {msg.turn_angle}')
        self.function2(msg)


    def function2(self, msg):
        if msg.turn_command == True:
            self.alpha_r_rr = self.alpha_r_ref + math.pi
            self.alpha_r_rl = self.alpha_r_ref + math.pi

        else:
            self.alpha_r_rr = self.alpha_r_ref 
            self.alpha_r_rl = self.alpha_r_ref 

        self.alpha_r_fr = self.alpha_r_ref
        self.alpha_r_fl = self.alpha_r_ref




        




def main(args=None):
    rclpy.init(args=args)
    node = MotorCommandPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
