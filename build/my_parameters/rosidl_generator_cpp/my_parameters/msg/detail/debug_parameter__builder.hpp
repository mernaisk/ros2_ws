// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__BUILDER_HPP_
#define MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_parameters/msg/detail/debug_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_parameters
{

namespace msg
{

namespace builder
{

class Init_DebugParameter_z_l_rl
{
public:
  explicit Init_DebugParameter_z_l_rl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  ::my_parameters::msg::DebugParameter z_l_rl(::my_parameters::msg::DebugParameter::_z_l_rl_type arg)
  {
    msg_.z_l_rl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_b_rl
{
public:
  explicit Init_DebugParameter_alpha_b_rl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_z_l_rl alpha_b_rl(::my_parameters::msg::DebugParameter::_alpha_b_rl_type arg)
  {
    msg_.alpha_b_rl = std::move(arg);
    return Init_DebugParameter_z_l_rl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_r_rl
{
public:
  explicit Init_DebugParameter_alpha_r_rl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_b_rl alpha_r_rl(::my_parameters::msg::DebugParameter::_alpha_r_rl_type arg)
  {
    msg_.alpha_r_rl = std::move(arg);
    return Init_DebugParameter_alpha_b_rl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_z_l_rr
{
public:
  explicit Init_DebugParameter_z_l_rr(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_r_rl z_l_rr(::my_parameters::msg::DebugParameter::_z_l_rr_type arg)
  {
    msg_.z_l_rr = std::move(arg);
    return Init_DebugParameter_alpha_r_rl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_b_rr
{
public:
  explicit Init_DebugParameter_alpha_b_rr(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_z_l_rr alpha_b_rr(::my_parameters::msg::DebugParameter::_alpha_b_rr_type arg)
  {
    msg_.alpha_b_rr = std::move(arg);
    return Init_DebugParameter_z_l_rr(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_r_rr
{
public:
  explicit Init_DebugParameter_alpha_r_rr(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_b_rr alpha_r_rr(::my_parameters::msg::DebugParameter::_alpha_r_rr_type arg)
  {
    msg_.alpha_r_rr = std::move(arg);
    return Init_DebugParameter_alpha_b_rr(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_z_l_fl
{
public:
  explicit Init_DebugParameter_z_l_fl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_r_rr z_l_fl(::my_parameters::msg::DebugParameter::_z_l_fl_type arg)
  {
    msg_.z_l_fl = std::move(arg);
    return Init_DebugParameter_alpha_r_rr(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_b_fl
{
public:
  explicit Init_DebugParameter_alpha_b_fl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_z_l_fl alpha_b_fl(::my_parameters::msg::DebugParameter::_alpha_b_fl_type arg)
  {
    msg_.alpha_b_fl = std::move(arg);
    return Init_DebugParameter_z_l_fl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_r_fl
{
public:
  explicit Init_DebugParameter_alpha_r_fl(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_b_fl alpha_r_fl(::my_parameters::msg::DebugParameter::_alpha_r_fl_type arg)
  {
    msg_.alpha_r_fl = std::move(arg);
    return Init_DebugParameter_alpha_b_fl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_z_l_fr
{
public:
  explicit Init_DebugParameter_z_l_fr(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_alpha_r_fl z_l_fr(::my_parameters::msg::DebugParameter::_z_l_fr_type arg)
  {
    msg_.z_l_fr = std::move(arg);
    return Init_DebugParameter_alpha_r_fl(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_b_fr
{
public:
  explicit Init_DebugParameter_alpha_b_fr(::my_parameters::msg::DebugParameter & msg)
  : msg_(msg)
  {}
  Init_DebugParameter_z_l_fr alpha_b_fr(::my_parameters::msg::DebugParameter::_alpha_b_fr_type arg)
  {
    msg_.alpha_b_fr = std::move(arg);
    return Init_DebugParameter_z_l_fr(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

class Init_DebugParameter_alpha_r_fr
{
public:
  Init_DebugParameter_alpha_r_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugParameter_alpha_b_fr alpha_r_fr(::my_parameters::msg::DebugParameter::_alpha_r_fr_type arg)
  {
    msg_.alpha_r_fr = std::move(arg);
    return Init_DebugParameter_alpha_b_fr(msg_);
  }

private:
  ::my_parameters::msg::DebugParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_parameters::msg::DebugParameter>()
{
  return my_parameters::msg::builder::Init_DebugParameter_alpha_r_fr();
}

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__BUILDER_HPP_
