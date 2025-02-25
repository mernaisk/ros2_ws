// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__BUILDER_HPP_
#define MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_parameters/msg/detail/joystick_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_parameters
{

namespace msg
{

namespace builder
{

class Init_JoystickParameters_enabled
{
public:
  explicit Init_JoystickParameters_enabled(::my_parameters::msg::JoystickParameters & msg)
  : msg_(msg)
  {}
  ::my_parameters::msg::JoystickParameters enabled(::my_parameters::msg::JoystickParameters::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

class Init_JoystickParameters_velocity
{
public:
  explicit Init_JoystickParameters_velocity(::my_parameters::msg::JoystickParameters & msg)
  : msg_(msg)
  {}
  Init_JoystickParameters_enabled velocity(::my_parameters::msg::JoystickParameters::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JoystickParameters_enabled(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

class Init_JoystickParameters_position_direction
{
public:
  explicit Init_JoystickParameters_position_direction(::my_parameters::msg::JoystickParameters & msg)
  : msg_(msg)
  {}
  Init_JoystickParameters_velocity position_direction(::my_parameters::msg::JoystickParameters::_position_direction_type arg)
  {
    msg_.position_direction = std::move(arg);
    return Init_JoystickParameters_velocity(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

class Init_JoystickParameters_position_command
{
public:
  explicit Init_JoystickParameters_position_command(::my_parameters::msg::JoystickParameters & msg)
  : msg_(msg)
  {}
  Init_JoystickParameters_position_direction position_command(::my_parameters::msg::JoystickParameters::_position_command_type arg)
  {
    msg_.position_command = std::move(arg);
    return Init_JoystickParameters_position_direction(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

class Init_JoystickParameters_turn_angle
{
public:
  explicit Init_JoystickParameters_turn_angle(::my_parameters::msg::JoystickParameters & msg)
  : msg_(msg)
  {}
  Init_JoystickParameters_position_command turn_angle(::my_parameters::msg::JoystickParameters::_turn_angle_type arg)
  {
    msg_.turn_angle = std::move(arg);
    return Init_JoystickParameters_position_command(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

class Init_JoystickParameters_turn_command
{
public:
  Init_JoystickParameters_turn_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickParameters_turn_angle turn_command(::my_parameters::msg::JoystickParameters::_turn_command_type arg)
  {
    msg_.turn_command = std::move(arg);
    return Init_JoystickParameters_turn_angle(msg_);
  }

private:
  ::my_parameters::msg::JoystickParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_parameters::msg::JoystickParameters>()
{
  return my_parameters::msg::builder::Init_JoystickParameters_turn_command();
}

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__BUILDER_HPP_
