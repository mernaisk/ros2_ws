// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__TRAITS_HPP_
#define MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_parameters/msg/detail/motor_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_parameters
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: alpha_a_fr
  {
    out << "alpha_a_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_fr, out);
    out << ", ";
  }

  // member: alpha_b_fr
  {
    out << "alpha_b_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fr, out);
    out << ", ";
  }

  // member: alpha_c_fr
  {
    out << "alpha_c_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_fr, out);
    out << ", ";
  }

  // member: alpha_a_fl
  {
    out << "alpha_a_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_fl, out);
    out << ", ";
  }

  // member: alpha_b_fl
  {
    out << "alpha_b_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fl, out);
    out << ", ";
  }

  // member: alpha_c_fl
  {
    out << "alpha_c_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_fl, out);
    out << ", ";
  }

  // member: alpha_a_rr
  {
    out << "alpha_a_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_rr, out);
    out << ", ";
  }

  // member: alpha_b_rr
  {
    out << "alpha_b_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rr, out);
    out << ", ";
  }

  // member: alpha_c_rr
  {
    out << "alpha_c_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_rr, out);
    out << ", ";
  }

  // member: alpha_a_rl
  {
    out << "alpha_a_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_rl, out);
    out << ", ";
  }

  // member: alpha_b_rl
  {
    out << "alpha_b_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rl, out);
    out << ", ";
  }

  // member: alpha_c_rl
  {
    out << "alpha_c_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_rl, out);
    out << ", ";
  }

  // member: move
  {
    out << "move: ";
    rosidl_generator_traits::value_to_yaml(msg.move, out);
    out << ", ";
  }

  // member: pre_tight
  {
    out << "pre_tight: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_tight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alpha_a_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_a_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_fr, out);
    out << "\n";
  }

  // member: alpha_b_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_b_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fr, out);
    out << "\n";
  }

  // member: alpha_c_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_c_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_fr, out);
    out << "\n";
  }

  // member: alpha_a_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_a_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_fl, out);
    out << "\n";
  }

  // member: alpha_b_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_b_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fl, out);
    out << "\n";
  }

  // member: alpha_c_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_c_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_fl, out);
    out << "\n";
  }

  // member: alpha_a_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_a_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_rr, out);
    out << "\n";
  }

  // member: alpha_b_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_b_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rr, out);
    out << "\n";
  }

  // member: alpha_c_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_c_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_rr, out);
    out << "\n";
  }

  // member: alpha_a_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_a_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_a_rl, out);
    out << "\n";
  }

  // member: alpha_b_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_b_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rl, out);
    out << "\n";
  }

  // member: alpha_c_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_c_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_c_rl, out);
    out << "\n";
  }

  // member: move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move: ";
    rosidl_generator_traits::value_to_yaml(msg.move, out);
    out << "\n";
  }

  // member: pre_tight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_tight: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_tight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorParameters & msg, bool use_flow_style = false)
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
  const my_parameters::msg::MotorParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_parameters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_parameters::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_parameters::msg::MotorParameters & msg)
{
  return my_parameters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_parameters::msg::MotorParameters>()
{
  return "my_parameters::msg::MotorParameters";
}

template<>
inline const char * name<my_parameters::msg::MotorParameters>()
{
  return "my_parameters/msg/MotorParameters";
}

template<>
struct has_fixed_size<my_parameters::msg::MotorParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_parameters::msg::MotorParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_parameters::msg::MotorParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__TRAITS_HPP_
