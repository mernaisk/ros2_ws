#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped

class StaticTFBroadcaster(Node):
    def __init__(self):
        super().__init__('static_tf_broadcaster')
        self.tf_broadcaster = StaticTransformBroadcaster(self)
        self.broadcast_transform()

    def broadcast_transform(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "base_link"  # Robot's main body
        t.child_frame_id = "laser_frame"  # LiDAR frame
        t.transform.translation.x = 0.2  # Adjust based on your LiDAR position
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.2
        t.transform.rotation.w = 1.0  # No rotation

        self.tf_broadcaster.sendTransform(t)
        self.get_logger().info("Publishing static TF from base_link to laser_frame")

def main():
    rclpy.init()
    node = StaticTFBroadcaster()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
