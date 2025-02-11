from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cartographer_ros',
            executable='cartographer_node',
            name='cartographer_node',
            output='screen',
            parameters=[{
                'use_sim_time': False,
            }],
            remappings=[
                ('/scan', '/scan'),
            ],
            arguments=[
                '-configuration_directory', '/home/pi2/ros2_ws/src/cartographer_config/config',
                '-configuration_basename', 'cartographer_config.lua'
            ]
        ),
        Node(
            package='cartographer_ros',
            executable='cartographer_occupancy_grid_node',
            name='cartographer_occupancy_grid_node',
            output='screen',
            parameters=[{
                'use_sim_time': False,
            }],
            remappings=[
                ('/map', '/map'),
            ]
        ),
        # Node(
        #     package='tf2_ros',
        #     executable='static_transform_publisher',
        #     name='static_transform_publisher_map_to_odom',
        #     arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
        #     output='screen',
        # ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_odom_to_base_link',
            arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_link'],
            output='screen',
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_base_link_to_laser',
            arguments=['0.002', '0', '0.106', '0', '0', '0', 'base_link', 'laser'],
            output='screen',
        ),
    ])
