// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__BUILDER_HPP_
#define MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_parameters/msg/detail/motor_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_parameters
{

namespace msg
{

namespace builder
{

class Init_MotorParameters_pre_tight
{
public:
  explicit Init_MotorParameters_pre_tight(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  ::my_parameters::msg::MotorParameters pre_tight(::my_parameters::msg::MotorParameters::_pre_tight_type arg)
  {
    msg_.pre_tight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_move
{
public:
  explicit Init_MotorParameters_move(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_pre_tight move(::my_parameters::msg::MotorParameters::_move_type arg)
  {
    msg_.move = std::move(arg);
    return Init_MotorParameters_pre_tight(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_c_rl
{
public:
  explicit Init_MotorParameters_alpha_c_rl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_move alpha_c_rl(::my_parameters::msg::MotorParameters::_alpha_c_rl_type arg)
  {
    msg_.alpha_c_rl = std::move(arg);
    return Init_MotorParameters_move(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_b_rl
{
public:
  explicit Init_MotorParameters_alpha_b_rl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_c_rl alpha_b_rl(::my_parameters::msg::MotorParameters::_alpha_b_rl_type arg)
  {
    msg_.alpha_b_rl = std::move(arg);
    return Init_MotorParameters_alpha_c_rl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_a_rl
{
public:
  explicit Init_MotorParameters_alpha_a_rl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_b_rl alpha_a_rl(::my_parameters::msg::MotorParameters::_alpha_a_rl_type arg)
  {
    msg_.alpha_a_rl = std::move(arg);
    return Init_MotorParameters_alpha_b_rl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_c_rr
{
public:
  explicit Init_MotorParameters_alpha_c_rr(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_a_rl alpha_c_rr(::my_parameters::msg::MotorParameters::_alpha_c_rr_type arg)
  {
    msg_.alpha_c_rr = std::move(arg);
    return Init_MotorParameters_alpha_a_rl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_b_rr
{
public:
  explicit Init_MotorParameters_alpha_b_rr(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_c_rr alpha_b_rr(::my_parameters::msg::MotorParameters::_alpha_b_rr_type arg)
  {
    msg_.alpha_b_rr = std::move(arg);
    return Init_MotorParameters_alpha_c_rr(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_a_rr
{
public:
  explicit Init_MotorParameters_alpha_a_rr(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_b_rr alpha_a_rr(::my_parameters::msg::MotorParameters::_alpha_a_rr_type arg)
  {
    msg_.alpha_a_rr = std::move(arg);
    return Init_MotorParameters_alpha_b_rr(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_c_fl
{
public:
  explicit Init_MotorParameters_alpha_c_fl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_a_rr alpha_c_fl(::my_parameters::msg::MotorParameters::_alpha_c_fl_type arg)
  {
    msg_.alpha_c_fl = std::move(arg);
    return Init_MotorParameters_alpha_a_rr(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_b_fl
{
public:
  explicit Init_MotorParameters_alpha_b_fl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_c_fl alpha_b_fl(::my_parameters::msg::MotorParameters::_alpha_b_fl_type arg)
  {
    msg_.alpha_b_fl = std::move(arg);
    return Init_MotorParameters_alpha_c_fl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_a_fl
{
public:
  explicit Init_MotorParameters_alpha_a_fl(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_b_fl alpha_a_fl(::my_parameters::msg::MotorParameters::_alpha_a_fl_type arg)
  {
    msg_.alpha_a_fl = std::move(arg);
    return Init_MotorParameters_alpha_b_fl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_c_fr
{
public:
  explicit Init_MotorParameters_alpha_c_fr(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_a_fl alpha_c_fr(::my_parameters::msg::MotorParameters::_alpha_c_fr_type arg)
  {
    msg_.alpha_c_fr = std::move(arg);
    return Init_MotorParameters_alpha_a_fl(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_b_fr
{
public:
  explicit Init_MotorParameters_alpha_b_fr(::my_parameters::msg::MotorParameters & msg)
  : msg_(msg)
  {}
  Init_MotorParameters_alpha_c_fr alpha_b_fr(::my_parameters::msg::MotorParameters::_alpha_b_fr_type arg)
  {
    msg_.alpha_b_fr = std::move(arg);
    return Init_MotorParameters_alpha_c_fr(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

class Init_MotorParameters_alpha_a_fr
{
public:
  Init_MotorParameters_alpha_a_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorParameters_alpha_b_fr alpha_a_fr(::my_parameters::msg::MotorParameters::_alpha_a_fr_type arg)
  {
    msg_.alpha_a_fr = std::move(arg);
    return Init_MotorParameters_alpha_b_fr(msg_);
  }

private:
  ::my_parameters::msg::MotorParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_parameters::msg::MotorParameters>()
{
  return my_parameters::msg::builder::Init_MotorParameters_alpha_a_fr();
}

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__BUILDER_HPP_
