from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

# Path to the EKF configuration file
config_file1 = os.path.join(
    get_package_share_directory('soft_robot_bringub'), 'config', 'ekf_config.yaml'
)


def generate_launch_description():
    return LaunchDescription([

        Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            output='screen',
            parameters=[config_file1]
        )
        
    ])
