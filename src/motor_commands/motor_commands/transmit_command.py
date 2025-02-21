import math
import rclpy
from rclpy.node import Node  # <-- Add this import
from motor_parameter.msg import Command as MotorCommand

class MotorCommandPublisher(Node):
    def __init__(self):
        super().__init__('motor_command_subscriber')
        

        self.subscription = self.create_subscription(
            MotorCommand,  
            '/motor_command',
            self.function,
            10
        )

        self.motor1_fr = 0
        self.motor2_fr = 0
        self.motor3_fr = 0

        self.motor1_fl = 0
        self.motor2_fl = 0
        self.motor3_fl = 0

        self.motor1_rr = 0
        self.motor2_rr = 0
        self.motor3_rr = 0

        self.motor1_rl = 0
        self.motor2_rl = 0
        self.motor3_rl = 0

        self.pretight1_fr = 0
        self.pretight2_fr = 0
        self.pretight3_fr = 0

        self.pretight1_fl = 0
        self.pretight2_fl = 0
        self.pretight3_fl = 0

        self.pretight1_rr = 0
        self.pretight2_rr = 0
        self.pretight3_rr = 0

        self.pretight1_rl = 0
        self.pretight2_rl = 0
        self.pretight3_rl = 0

    def function(self, msg):

        if msg.move == True:
            self.motor1_fr = (msg.alpha_a_fr * 180/math.pi) + 90
            self.motor2_fr = (msg.alpha_b_fr * 180/math.pi) + 90
            self.motor3_fr = (msg.alpha_c_fr * 180/math.pi) + 90

            self.motor1_fl = (msg.alpha_a_fl * 180/math.pi) + 90
            self.motor2_fl = (msg.alpha_b_fl * 180/math.pi) + 90
            self.motor3_fl = (msg.alpha_c_fl * 180/math.pi) + 90

            self.motor1_rr = (msg.alpha_a_rr * 180/math.pi) + 90
            self.motor2_rr = (msg.alpha_b_rr * 180/math.pi) + 90
            self.motor3_rr = (msg.alpha_c_rr * 180/math.pi) + 90

            self.motor1_rl = (msg.alpha_a_rl * 180/math.pi) + 90
            self.motor2_rl = (msg.alpha_b_rl * 180/math.pi) + 90
            self.motor3_rl = (msg.alpha_c_rl * 180/math.pi) + 90
        else:
            self.motor1_fr =  90
            self.motor2_fr =  90
            self.motor3_fr =  90

            self.motor1_fl =  90
            self.motor2_fl =  90
            self.motor3_fl =  90

            self.motor1_rr =  90
            self.motor2_rr =  90
            self.motor3_rr =  90

            self.motor1_rl =  90
            self.motor2_rl =  90
            self.motor3_rl =  90   

        if msg.pre_tight == True:
            const = 5   
        else:
            const = 0

              
        self.pretight1_fr = const
        self.pretight2_fr = 3 + const
        self.pretight3_fr = 10 + const

        self.pretight1_fl = 5 + const
        self.pretight2_fl = -2 + const
        self.pretight3_fl = 4 + const

        self.pretight1_rr = const
        self.pretight2_rr = 5 + const
        self.pretight3_rr = 5 + const

        self.pretight1_rl = const
        self.pretight2_rl = const
        self.pretight3_rl = 3 + const

        self.motor1_fr -=  self.pretight1_fr
        self.motor2_fr -=  self.pretight2_fr
        self.motor3_fr -=  self.pretight3_fr

        self.motor1_fl -=  self.pretight1_fl
        self.motor2_fl -=  self.pretight2_fl
        self.motor3_fl -=  self.pretight3_fl

        self.motor1_rr -=  self.pretight1_rr
        self.motor2_rr -=  self.pretight2_rr
        self.motor3_rr -=  self.pretight3_rr

        self.motor1_rl -=  self.pretight1_rl
        self.motor2_rl -=  self.pretight2_rl
        self.motor3_rl -=  self.pretight3_rl 
        
        self.get_logger().info(f'FR Motors: {self.motor1_fr}, {self.motor2_fr}, {self.motor3_fr}')
        self.get_logger().info(f'FL Motors: {self.motor1_fl}, {self.motor2_fl}, {self.motor3_fl}')
        self.get_logger().info(f'RR Motors: {self.motor1_rr}, {self.motor2_rr}, {self.motor3_rr}')
        self.get_logger().info(f'RL Motors: {self.motor1_rl}, {self.motor2_rl}, {self.motor3_rl}')





def main(args=None):
    rclpy.init(args=args)
    node = MotorCommandPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
