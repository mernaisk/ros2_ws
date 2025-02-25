// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__STM32_DATA__BUILDER_HPP_
#define MY_PARAMETERS__MSG__DETAIL__STM32_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_parameters/msg/detail/stm32_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_parameters
{

namespace msg
{

namespace builder
{

class Init_Stm32Data_motor3_rl
{
public:
  explicit Init_Stm32Data_motor3_rl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  ::my_parameters::msg::Stm32Data motor3_rl(::my_parameters::msg::Stm32Data::_motor3_rl_type arg)
  {
    msg_.motor3_rl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor2_rl
{
public:
  explicit Init_Stm32Data_motor2_rl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor3_rl motor2_rl(::my_parameters::msg::Stm32Data::_motor2_rl_type arg)
  {
    msg_.motor2_rl = std::move(arg);
    return Init_Stm32Data_motor3_rl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor1_rl
{
public:
  explicit Init_Stm32Data_motor1_rl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor2_rl motor1_rl(::my_parameters::msg::Stm32Data::_motor1_rl_type arg)
  {
    msg_.motor1_rl = std::move(arg);
    return Init_Stm32Data_motor2_rl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor3_rr
{
public:
  explicit Init_Stm32Data_motor3_rr(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor1_rl motor3_rr(::my_parameters::msg::Stm32Data::_motor3_rr_type arg)
  {
    msg_.motor3_rr = std::move(arg);
    return Init_Stm32Data_motor1_rl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor2_rr
{
public:
  explicit Init_Stm32Data_motor2_rr(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor3_rr motor2_rr(::my_parameters::msg::Stm32Data::_motor2_rr_type arg)
  {
    msg_.motor2_rr = std::move(arg);
    return Init_Stm32Data_motor3_rr(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor1_rr
{
public:
  explicit Init_Stm32Data_motor1_rr(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor2_rr motor1_rr(::my_parameters::msg::Stm32Data::_motor1_rr_type arg)
  {
    msg_.motor1_rr = std::move(arg);
    return Init_Stm32Data_motor2_rr(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor3_fl
{
public:
  explicit Init_Stm32Data_motor3_fl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor1_rr motor3_fl(::my_parameters::msg::Stm32Data::_motor3_fl_type arg)
  {
    msg_.motor3_fl = std::move(arg);
    return Init_Stm32Data_motor1_rr(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor2_fl
{
public:
  explicit Init_Stm32Data_motor2_fl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor3_fl motor2_fl(::my_parameters::msg::Stm32Data::_motor2_fl_type arg)
  {
    msg_.motor2_fl = std::move(arg);
    return Init_Stm32Data_motor3_fl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor1_fl
{
public:
  explicit Init_Stm32Data_motor1_fl(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor2_fl motor1_fl(::my_parameters::msg::Stm32Data::_motor1_fl_type arg)
  {
    msg_.motor1_fl = std::move(arg);
    return Init_Stm32Data_motor2_fl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor3_fr
{
public:
  explicit Init_Stm32Data_motor3_fr(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor1_fl motor3_fr(::my_parameters::msg::Stm32Data::_motor3_fr_type arg)
  {
    msg_.motor3_fr = std::move(arg);
    return Init_Stm32Data_motor1_fl(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor2_fr
{
public:
  explicit Init_Stm32Data_motor2_fr(::my_parameters::msg::Stm32Data & msg)
  : msg_(msg)
  {}
  Init_Stm32Data_motor3_fr motor2_fr(::my_parameters::msg::Stm32Data::_motor2_fr_type arg)
  {
    msg_.motor2_fr = std::move(arg);
    return Init_Stm32Data_motor3_fr(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

class Init_Stm32Data_motor1_fr
{
public:
  Init_Stm32Data_motor1_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stm32Data_motor2_fr motor1_fr(::my_parameters::msg::Stm32Data::_motor1_fr_type arg)
  {
    msg_.motor1_fr = std::move(arg);
    return Init_Stm32Data_motor2_fr(msg_);
  }

private:
  ::my_parameters::msg::Stm32Data msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_parameters::msg::Stm32Data>()
{
  return my_parameters::msg::builder::Init_Stm32Data_motor1_fr();
}

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__STM32_DATA__BUILDER_HPP_
