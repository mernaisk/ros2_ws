from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

# Path to the EKF configuration file
config_file = os.path.join(
    get_package_share_directory('soft_robot_bringub'), 'config', 'ekf_config.yaml'
)

sllidar_launch_file = os.path.join(
    get_package_share_directory('sllidar_ros2'), 'launch', 'view_sllidar_a2m8_launch.py'
)

def generate_launch_description():
    return LaunchDescription([
        # Launch joystick_publisher node
        Node(
            package='bno055',
            executable='bno055',
            name='bno055',
            output='screen'
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(sllidar_launch_file)
        ),

        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='tf_static_lidar',
            arguments=['0.3', '0.0', '0.2', '0', '0', '0', '1', 'base_link', 'lidar_link']
        ),
        # Launch the EKF localization node (no need for IncludeLaunchDescription)
        Node(
            package='robot_localization',
            executable='ekf_node',  # this is the EKF localization node
            name='ekf_filter_node',
            output='screen',
            parameters=[config_file]  # path to the EKF config file
        )
        
    ])
