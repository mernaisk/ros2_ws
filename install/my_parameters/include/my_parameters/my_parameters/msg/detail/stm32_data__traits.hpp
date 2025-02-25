// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__STM32_DATA__TRAITS_HPP_
#define MY_PARAMETERS__MSG__DETAIL__STM32_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_parameters/msg/detail/stm32_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_parameters
{

namespace msg
{

inline void to_flow_style_yaml(
  const Stm32Data & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor1_fr
  {
    out << "motor1_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_fr, out);
    out << ", ";
  }

  // member: motor2_fr
  {
    out << "motor2_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_fr, out);
    out << ", ";
  }

  // member: motor3_fr
  {
    out << "motor3_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_fr, out);
    out << ", ";
  }

  // member: motor1_fl
  {
    out << "motor1_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_fl, out);
    out << ", ";
  }

  // member: motor2_fl
  {
    out << "motor2_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_fl, out);
    out << ", ";
  }

  // member: motor3_fl
  {
    out << "motor3_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_fl, out);
    out << ", ";
  }

  // member: motor1_rr
  {
    out << "motor1_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_rr, out);
    out << ", ";
  }

  // member: motor2_rr
  {
    out << "motor2_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_rr, out);
    out << ", ";
  }

  // member: motor3_rr
  {
    out << "motor3_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_rr, out);
    out << ", ";
  }

  // member: motor1_rl
  {
    out << "motor1_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_rl, out);
    out << ", ";
  }

  // member: motor2_rl
  {
    out << "motor2_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_rl, out);
    out << ", ";
  }

  // member: motor3_rl
  {
    out << "motor3_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_rl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Stm32Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor1_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_fr, out);
    out << "\n";
  }

  // member: motor2_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_fr, out);
    out << "\n";
  }

  // member: motor3_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_fr, out);
    out << "\n";
  }

  // member: motor1_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_fl, out);
    out << "\n";
  }

  // member: motor2_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_fl, out);
    out << "\n";
  }

  // member: motor3_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_fl, out);
    out << "\n";
  }

  // member: motor1_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_rr, out);
    out << "\n";
  }

  // member: motor2_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_rr, out);
    out << "\n";
  }

  // member: motor3_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_rr, out);
    out << "\n";
  }

  // member: motor1_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1_rl, out);
    out << "\n";
  }

  // member: motor2_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2_rl, out);
    out << "\n";
  }

  // member: motor3_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3_rl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Stm32Data & msg, bool use_flow_style = false)
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
  const my_parameters::msg::Stm32Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_parameters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_parameters::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_parameters::msg::Stm32Data & msg)
{
  return my_parameters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_parameters::msg::Stm32Data>()
{
  return "my_parameters::msg::Stm32Data";
}

template<>
inline const char * name<my_parameters::msg::Stm32Data>()
{
  return "my_parameters/msg/Stm32Data";
}

template<>
struct has_fixed_size<my_parameters::msg::Stm32Data>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_parameters::msg::Stm32Data>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_parameters::msg::Stm32Data>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PARAMETERS__MSG__DETAIL__STM32_DATA__TRAITS_HPP_
