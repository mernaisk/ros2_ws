import math
import rclpy
from rclpy.node import Node
from joystick_parameter.msg import Command  # Correct import based on your topic info
from motor_parameter.msg import Command as MotorCommand

class MotorCommandPublisher(Node):
    def __init__(self):
        super().__init__('motor_command_subscriber')
        
        # Initialize the start time
        self.time_start = self.get_clock().now().seconds_nanoseconds()[0]
        
        # Timer for periodic update (10 ms interval)
        self.timer = self.create_timer(0.001, self.update_motor_command)

        # Publisher for motor command
        self.publisher_ = self.create_publisher(MotorCommand, "motor_command", 10)

        # Subscription to joystick command
        self.subscription = self.create_subscription(
            Command,  
            '/joystick_command',
            self.function,
            10
        )

        # Initial references and states
        self.alpha_r_ref = 0
        self.alpha_b_ref = 0.6247
        self.z_l_ref = 0.0076
        self.move = False
        self.pre_tight = False

        # Initialize all variables to 0.0
        self.alpha_r_fr = 0.0
        self.alpha_b_fr = 0.0
        self.z_l_fr = 0.0

        self.alpha_r_fl = 0.0
        self.alpha_b_fl = 0.0
        self.z_l_fl = 0.0

        self.alpha_r_rr = 0.0
        self.alpha_b_rr = 0.0
        self.z_l_rr = 0.0

        self.alpha_r_rl = 0.0
        self.alpha_b_rl = 0.0
        self.z_l_rl = 0.0

    def function(self, msg):
        # Update reference values based on joystick input
        self.alpha_r_ref = msg.turn_angle if msg.turn_command else msg.position_direction

        # Call the second function to calculate angles
        self.function2(msg)

    def function2(self, msg):
        # Calculate angles based on turning state
        if msg.turn_command:
            self.alpha_r_rr = self.alpha_r_ref + math.pi
            self.alpha_r_rl = self.alpha_r_ref + math.pi
        else:
            self.alpha_r_rr = self.alpha_r_ref
            self.alpha_r_rl = self.alpha_r_ref

        self.alpha_r_fr = self.alpha_r_ref
        self.alpha_r_fl = self.alpha_r_ref

        if msg.enabled == True:
            if msg.turn_command == 1 or msg.position_command == 1:
                self.move = True
            else:
                self.move = False
        else:
            self.move = False

        self.pre_tight = msg.enabled

    def calculate_alpha_abc(self, alpha_r, alpha_b, z_l):
        """ Mathematical calculation for alpha_A, alpha_B, and alpha_C """
        L_disk = 0.02944
        R_spool = 0.021
        R_w = L_disk / math.sqrt(3)

        alpha_A = -(-R_w * alpha_b * math.cos(-alpha_r) + z_l) / R_spool
        alpha_B = -(-R_w * alpha_b * math.cos(-alpha_r + (2 * math.pi / 3)) + z_l) / R_spool
        alpha_C = -(-R_w * alpha_b * math.cos(-alpha_r + (4 * math.pi / 3)) + z_l) / R_spool
        
        return alpha_A, alpha_B, alpha_C

    def update_motor_command(self):
        # Calculate elapsed time
        current_time = self.get_clock().now().seconds_nanoseconds()[0]
        elapsed_time = current_time - self.time_start
        t_mod = elapsed_time % 0.8

        # --- Function 1 (Sinusoidal) ---
        func1_value = self.alpha_b_ref * math.sin(2 * math.pi / 0.8 * elapsed_time)

        # --- Function 2 (Negative Sinusoidal) ---
        func2_value = -self.alpha_b_ref * math.sin(2 * math.pi / 0.8 * elapsed_time)

        # --- Function 3 (Custom Wave) ---
        if 0 <= t_mod < 0.2:
            func3_value = 1 - (t_mod / 0.2)
        elif 0.2 <= t_mod < 0.6:
            func3_value = 0
        elif 0.6 <= t_mod < 0.8:
            func3_value = (t_mod - 0.6) / 0.2
        else:
            func3_value = 0  

        # --- Function 4 (New Custom Wave) ---
        if 0 <= t_mod < 0.2:
            func4_value = 0
        elif 0.2 <= t_mod < 0.4:
            func4_value = (t_mod - 0.2) / 0.2
        elif 0.4 <= t_mod < 0.6:
            func4_value = 1 - (t_mod - 0.4) / 0.2
        elif 0.6 <= t_mod < 0.8:
            func4_value = 0
        else:
            func4_value = 0

        # Assign calculated values to variables
        self.alpha_b_fr = func1_value 
        self.alpha_b_rl = func1_value 
        self.alpha_b_fl = func2_value 
        self.alpha_b_rr = func2_value 
        self.z_l_fl = func3_value * self.z_l_ref
        self.z_l_rr = func3_value * self.z_l_ref
        self.z_l_fr = func4_value * self.z_l_ref
        self.z_l_rl = func4_value * self.z_l_ref


        # --- Calculate and Publish for all wheels ---
        motor_command = MotorCommand()
        motor_command.alpha_a_fr, motor_command.alpha_b_fr, motor_command.alpha_c_fr = self.calculate_alpha_abc(self.alpha_r_fr, self.alpha_b_fr, self.z_l_fr)
        motor_command.alpha_a_fl, motor_command.alpha_b_fl, motor_command.alpha_c_fl = self.calculate_alpha_abc(self.alpha_r_fl, self.alpha_b_fl, self.z_l_fl)
        motor_command.alpha_a_rr, motor_command.alpha_b_rr, motor_command.alpha_c_rr = self.calculate_alpha_abc(self.alpha_r_rr, self.alpha_b_rr, self.z_l_rr)
        motor_command.alpha_a_rl, motor_command.alpha_b_rl, motor_command.alpha_c_rl = self.calculate_alpha_abc(self.alpha_r_rl, self.alpha_b_rl, self.z_l_rl)
        motor_command.move = self.move
        motor_command.pre_tight = self.pre_tight
        self.publisher_.publish(motor_command)
        self.get_logger().info(f'alpha a: {motor_command.alpha_a_fl}')
        self.get_logger().info(f'alpha b: {motor_command.alpha_b_fl}')
        self.get_logger().info(f'alpha c: {motor_command.alpha_c_fl}')

        # self.get_logger().info(f'alpha_r_fr: {self.alpha_r_fr}')
        # self.get_logger().info(f'alpha_b_fr: {self.alpha_b_fr}')
        # self.get_logger().info(f'z_l_fr: {self.z_l_fr}')
        self.get_logger().info(f't_mod: {t_mod}')


def main(args=None):
    rclpy.init(args=args)
    node = MotorCommandPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
