// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__TRAITS_HPP_
#define MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_parameters/msg/detail/debug_parameter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_parameters
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugParameter & msg,
  std::ostream & out)
{
  out << "{";
  // member: alpha_r_fr
  {
    out << "alpha_r_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_fr, out);
    out << ", ";
  }

  // member: alpha_b_fr
  {
    out << "alpha_b_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fr, out);
    out << ", ";
  }

  // member: z_l_fr
  {
    out << "z_l_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_fr, out);
    out << ", ";
  }

  // member: alpha_r_fl
  {
    out << "alpha_r_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_fl, out);
    out << ", ";
  }

  // member: alpha_b_fl
  {
    out << "alpha_b_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_fl, out);
    out << ", ";
  }

  // member: z_l_fl
  {
    out << "z_l_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_fl, out);
    out << ", ";
  }

  // member: alpha_r_rr
  {
    out << "alpha_r_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_rr, out);
    out << ", ";
  }

  // member: alpha_b_rr
  {
    out << "alpha_b_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rr, out);
    out << ", ";
  }

  // member: z_l_rr
  {
    out << "z_l_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_rr, out);
    out << ", ";
  }

  // member: alpha_r_rl
  {
    out << "alpha_r_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_rl, out);
    out << ", ";
  }

  // member: alpha_b_rl
  {
    out << "alpha_b_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_b_rl, out);
    out << ", ";
  }

  // member: z_l_rl
  {
    out << "z_l_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_rl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alpha_r_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_r_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_fr, out);
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

  // member: z_l_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_l_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_fr, out);
    out << "\n";
  }

  // member: alpha_r_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_r_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_fl, out);
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

  // member: z_l_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_l_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_fl, out);
    out << "\n";
  }

  // member: alpha_r_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_r_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_rr, out);
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

  // member: z_l_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_l_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_rr, out);
    out << "\n";
  }

  // member: alpha_r_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_r_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_r_rl, out);
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

  // member: z_l_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_l_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.z_l_rl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugParameter & msg, bool use_flow_style = false)
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
  const my_parameters::msg::DebugParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_parameters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_parameters::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_parameters::msg::DebugParameter & msg)
{
  return my_parameters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_parameters::msg::DebugParameter>()
{
  return "my_parameters::msg::DebugParameter";
}

template<>
inline const char * name<my_parameters::msg::DebugParameter>()
{
  return "my_parameters/msg/DebugParameter";
}

template<>
struct has_fixed_size<my_parameters::msg::DebugParameter>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_parameters::msg::DebugParameter>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_parameters::msg::DebugParameter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__TRAITS_HPP_
