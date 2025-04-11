// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_HPP_
#define MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_parameters__msg__ObstacleProximityLog __attribute__((deprecated))
#else
# define DEPRECATED__my_parameters__msg__ObstacleProximityLog __declspec(deprecated)
#endif

namespace my_parameters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleProximityLog_
{
  using Type = ObstacleProximityLog_<ContainerAllocator>;

  explicit ObstacleProximityLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_zone = 0;
      this->goal_status = 0;
      this->turn_count = 0l;
    }
  }

  explicit ObstacleProximityLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_zone = 0;
      this->goal_status = 0;
      this->turn_count = 0l;
    }
  }

  // field types and members
  using _distance_zone_type =
    int8_t;
  _distance_zone_type distance_zone;
  using _goal_status_type =
    int8_t;
  _goal_status_type goal_status;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _turn_count_type =
    int32_t;
  _turn_count_type turn_count;

  // setters for named parameter idiom
  Type & set__distance_zone(
    const int8_t & _arg)
  {
    this->distance_zone = _arg;
    return *this;
  }
  Type & set__goal_status(
    const int8_t & _arg)
  {
    this->goal_status = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__turn_count(
    const int32_t & _arg)
  {
    this->turn_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_parameters__msg__ObstacleProximityLog
    std::shared_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_parameters__msg__ObstacleProximityLog
    std::shared_ptr<my_parameters::msg::ObstacleProximityLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleProximityLog_ & other) const
  {
    if (this->distance_zone != other.distance_zone) {
      return false;
    }
    if (this->goal_status != other.goal_status) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->turn_count != other.turn_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleProximityLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleProximityLog_

// alias to use template instance with default allocator
using ObstacleProximityLog =
  my_parameters::msg::ObstacleProximityLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_HPP_
