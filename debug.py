import rosbag2_py
import pandas as pd
import matplotlib.pyplot as plt
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# ROS2 bag file path
bag_path = "/home/pi2/motor_data2"  # Ensure the path is correct
topic_name = "/debug_motor_parameters"  # New topic for debug values

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
            msg.alpha_r_rr,  # If alpha_r_fr is correct in DebugMotorParameters
            msg.alpha_b_rr,
            msg.z_l_rr,
            msg.alpha_r_rl,  # If alpha_r_fl is part of DebugMotorParameters
            msg.alpha_b_rl,
            msg.z_l_rl,         
        ])

# Convert to DataFrame with the correct column names
df = pd.DataFrame(data, columns=["time", "alpha_r_rr", "alpha_b_rr", "z_l_rr", "alpha_r_rl", "alpha_b_rl", "z_l_rl"])
df.to_csv("motor_data.csv", index=False)  # Save to CSV
print(df.head())  # Print first 5 rows

# Plot the values
plt.figure(figsize=(10, 5))
plt.plot(df["time"].to_numpy(), df["alpha_r_rr"].to_numpy(), label="alpha_r_rr", linestyle="dashed")
plt.plot(df["time"].to_numpy(), df["alpha_b_rr"].to_numpy(), label="alpha_b_rr", linestyle="dashed")
plt.plot(df["time"].to_numpy(), df["z_l_rr"].to_numpy(), label="z_l_rr", linestyle="dashed")
plt.plot(df["time"].to_numpy(), df["alpha_r_rl"].to_numpy(), label="alpha_r_rl")
plt.plot(df["time"].to_numpy(), df["alpha_b_rl"].to_numpy(), label="alpha_b_rl")
plt.plot(df["time"].to_numpy(), df["z_l_rl"].to_numpy(), label="z_l_rl")
plt.xlabel("Time (s)")
plt.ylabel("Debug Motor Parameters")
plt.title("Debug Motor Parameters Over Time")
plt.legend()
plt.grid()
plt.show()
