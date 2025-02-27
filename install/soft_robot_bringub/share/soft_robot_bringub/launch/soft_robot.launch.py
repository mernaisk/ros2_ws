import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
from launch.actions import DeclareLaunchArgument

# Path to the EKF configuration file
config_file = os.path.join(
    get_package_share_directory('soft_robot_bringub'), 'config', 'ekf_config.yaml'
)

def generate_launch_description():
    return LaunchDescription([
        # Launch joystick_publisher node
        Node(
            package='joystick_publisher',
            executable='joystick_publisher',
            name='joystick_publisher',
            output='screen'
        ),
        
        # Launch motor_commands.py node
        Node(
            package='motor_commands',
            executable='motor_commands',
            name='motor_commands',
            output='screen'
        ),
        
        # Launch transmit_command.py node
        Node(
            package='motor_commands',
            executable='transmit_command',
            name='transmit_command',
            output='screen'
        ),
        
        # Launch motor_serial node
        Node(
            package='motor_serial',
            executable='motor_serial',
            name='motor_serial',
            output='screen'
        ),

        # Launch bno055 node
        Node(
            package='bno055',
            executable='bno055',
            name='bno055',
            output='screen'
        ),

        # Declare arguments (use_sim_time)
        DeclareLaunchArgument('use_sim_time', default_value='false', description='Use simulation time'),

        # Launch the EKF localization node (no need for IncludeLaunchDescription)
        Node(
            package='robot_localization',
            executable='ekf_node',  # this is the EKF localization node
            name='ekf_filter_node',
            output='screen',
            parameters=[config_file]  # path to the EKF config file
        )
    ])
