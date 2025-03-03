import rosbag2_py
import pandas as pd
import matplotlib.pyplot as plt
from rclpy.serialization import deserialize_message
from my_parameters.msg import MotorParameters  # Ensure this is correct
from rosidl_runtime_py.utilities import get_message

# ROS2 bag file path
bag_path = "/home/pi2/motor_data1"  # Ensure the path is correct
topic_name = "/motor_command"

# Open the bag
reader = rosbag2_py.SequentialReader()
storage_options = rosbag2_py.StorageOptions(uri=bag_path, storage_id="sqlite3")
converter_options = rosbag2_py.ConverterOptions()
reader.open(storage_options, converter_options)

# Get message type for the specified topic
topic_type_map = {topic.name: topic.type for topic in reader.get_all_topics_and_types()}
if topic_name not in topic_type_map:
    raise ValueError(f"Topic '{topic_name}' not found in the bag!")
msg_type = get_message(topic_type_map[topic_name])

# Extract data
data = []
while reader.has_next():
    topic, msg_data, t = reader.read_next()
    if topic == topic_name:
        msg = deserialize_message(msg_data, msg_type)
        data.append([
            t / 1e9,  # Convert timestamp to seconds
            msg.alpha_a_fr,  # Ensure these attributes exist in your message
            msg.alpha_b_fr,
            msg.alpha_c_fr,
            msg.alpha_a_fl,
            msg.alpha_b_fl,
            msg.alpha_c_fl,           
        ])

# Convert to DataFrame
df = pd.DataFrame(data, columns=["time", "alpha_a_fr", "alpha_b_fr", "alpha_c_fr","alpha_a_fl", "alpha_b_fl", "alpha_c_fl"])
df.to_csv("motor_data.csv", index=False)  # Save to CSV
print(df.head())  # Print first 5 rows

# Plot the values
plt.figure(figsize=(10, 5))
plt.plot(df["time"].to_numpy(), df["alpha_a_fr"].to_numpy(), label="alpha_a_fr")
plt.plot(df["time"].to_numpy(), df["alpha_b_fr"].to_numpy(), label="alpha_b_fr")
plt.plot(df["time"].to_numpy(), df["alpha_c_fr"].to_numpy(), label="alpha_c_fr")
plt.plot(df["time"].to_numpy(), df["alpha_a_fl"].to_numpy(), label="alpha_a_fl")
plt.plot(df["time"].to_numpy(), df["alpha_b_fl"].to_numpy(), label="alpha_b_fl")
plt.plot(df["time"].to_numpy(), df["alpha_c_fl"].to_numpy(), label="alpha_c_fl")
plt.xlabel("Time (s)")
plt.ylabel("Motor Alpha Values")
plt.title("Motor Command Alpha Values Over Time")
plt.legend()
plt.grid()
plt.show()
