// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__TRAITS_HPP_
#define MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_parameters/msg/detail/obstacle_proximity_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_parameters
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleProximityLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_zone
  {
    out << "distance_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_zone, out);
    out << ", ";
  }

  // member: goal_status
  {
    out << "goal_status: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_status, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: turn_count
  {
    out << "turn_count: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleProximityLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_zone, out);
    out << "\n";
  }

  // member: goal_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_status: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_status, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: turn_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_count: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleProximityLog & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_parameters

namespace rosidl_generator_traits
{

[[deprecated("use my_parameters::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_parameters::msg::ObstacleProximityLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_parameters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_parameters::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_parameters::msg::ObstacleProximityLog & msg)
{
  return my_parameters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_parameters::msg::ObstacleProximityLog>()
{
  return "my_parameters::msg::ObstacleProximityLog";
}

template<>
inline const char * name<my_parameters::msg::ObstacleProximityLog>()
{
  return "my_parameters/msg/ObstacleProximityLog";
}

template<>
struct has_fixed_size<my_parameters::msg::ObstacleProximityLog>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_parameters::msg::ObstacleProximityLog>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_parameters::msg::ObstacleProximityLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__TRAITS_HPP_
