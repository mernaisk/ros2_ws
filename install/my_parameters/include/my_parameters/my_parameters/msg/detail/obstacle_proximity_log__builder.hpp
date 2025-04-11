// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__BUILDER_HPP_
#define MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_parameters/msg/detail/obstacle_proximity_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_parameters
{

namespace msg
{

namespace builder
{

class Init_ObstacleProximityLog_turn_count
{
public:
  explicit Init_ObstacleProximityLog_turn_count(::my_parameters::msg::ObstacleProximityLog & msg)
  : msg_(msg)
  {}
  ::my_parameters::msg::ObstacleProximityLog turn_count(::my_parameters::msg::ObstacleProximityLog::_turn_count_type arg)
  {
    msg_.turn_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_parameters::msg::ObstacleProximityLog msg_;
};

class Init_ObstacleProximityLog_stamp
{
public:
  explicit Init_ObstacleProximityLog_stamp(::my_parameters::msg::ObstacleProximityLog & msg)
  : msg_(msg)
  {}
  Init_ObstacleProximityLog_turn_count stamp(::my_parameters::msg::ObstacleProximityLog::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ObstacleProximityLog_turn_count(msg_);
  }

private:
  ::my_parameters::msg::ObstacleProximityLog msg_;
};

class Init_ObstacleProximityLog_goal_status
{
public:
  explicit Init_ObstacleProximityLog_goal_status(::my_parameters::msg::ObstacleProximityLog & msg)
  : msg_(msg)
  {}
  Init_ObstacleProximityLog_stamp goal_status(::my_parameters::msg::ObstacleProximityLog::_goal_status_type arg)
  {
    msg_.goal_status = std::move(arg);
    return Init_ObstacleProximityLog_stamp(msg_);
  }

private:
  ::my_parameters::msg::ObstacleProximityLog msg_;
};

class Init_ObstacleProximityLog_distance_zone
{
public:
  Init_ObstacleProximityLog_distance_zone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleProximityLog_goal_status distance_zone(::my_parameters::msg::ObstacleProximityLog::_distance_zone_type arg)
  {
    msg_.distance_zone = std::move(arg);
    return Init_ObstacleProximityLog_goal_status(msg_);
  }

private:
  ::my_parameters::msg::ObstacleProximityLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_parameters::msg::ObstacleProximityLog>()
{
  return my_parameters::msg::builder::Init_ObstacleProximityLog_distance_zone();
}

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__BUILDER_HPP_
