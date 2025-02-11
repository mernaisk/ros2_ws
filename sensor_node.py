import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # This is an example, you may need a custom message type depending on your data

# Import your SoftQ class
import sys
sys.path.append('/home/pi2/ros2_ws/src/soft_robot')
from SoftQ_CPG_R1_demo_server import SoftQ  # Import the SoftQ class to read sensor data

class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')

        # Create a publisher to send the data to a topic
        self.publisher = self.create_publisher(String, 'sensor_data', 10)

        # Set up a timer to periodically call the callback
        self.timer = self.create_timer(1.0, self.timer_callback)  # Call every 1 second
        
        # Create an instance of your SoftQ class to interact with the sensors
        self.robot = SoftQ(useJoy=False)

    def timer_callback(self):
        # Get actual sensor data from the SoftQ instance
        distance = self.robot.read_dis()  # Read distance from ToF sensors
        acc = self.robot.imu.linear_acceleration  # Read IMU acceleration data
        quat = self.robot.imu.quaternion  # Read IMU quaternion data

        # Construct the sensor data message
        sensor_data = f"Distance: {distance}, Acceleration: {acc}, Quaternion: {quat}"
        
        # Publish the data to the ROS topic
        msg = String()
        msg.data = sensor_data
        self.publisher.publish(msg)

        # Log the message being published for debugging
        self.get_logger().info(f'Publishing: "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)

    sensor_node = SensorNode()

    # Spin the node to keep it alive and publish messages
    rclpy.spin(sensor_node)

    # Clean up and shutdown when done
    sensor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
