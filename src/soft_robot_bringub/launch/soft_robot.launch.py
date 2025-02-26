import launch
from launch import LaunchDescription
from launch_ros.actions import Node

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
        )
    ])