// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__TRAITS_HPP_
#define MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_parameters/msg/detail/joystick_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_parameters
{

namespace msg
{

inline void to_flow_style_yaml(
  const JoystickParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: turn_command
  {
    out << "turn_command: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_command, out);
    out << ", ";
  }

  // member: turn_angle
  {
    out << "turn_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_angle, out);
    out << ", ";
  }

  // member: position_command
  {
    out << "position_command: ";
    rosidl_generator_traits::value_to_yaml(msg.position_command, out);
    out << ", ";
  }

  // member: position_direction
  {
    out << "position_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.position_direction, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JoystickParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turn_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_command: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_command, out);
    out << "\n";
  }

  // member: turn_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_angle, out);
    out << "\n";
  }

  // member: position_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_command: ";
    rosidl_generator_traits::value_to_yaml(msg.position_command, out);
    out << "\n";
  }

  // member: position_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.position_direction, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JoystickParameters & msg, bool use_flow_style = false)
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
  const my_parameters::msg::JoystickParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_parameters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_parameters::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_parameters::msg::JoystickParameters & msg)
{
  return my_parameters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_parameters::msg::JoystickParameters>()
{
  return "my_parameters::msg::JoystickParameters";
}

template<>
inline const char * name<my_parameters::msg::JoystickParameters>()
{
  return "my_parameters/msg/JoystickParameters";
}

template<>
struct has_fixed_size<my_parameters::msg::JoystickParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_parameters::msg::JoystickParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_parameters::msg::JoystickParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__TRAITS_HPP_
