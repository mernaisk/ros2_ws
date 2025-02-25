// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_HPP_
#define MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_parameters__msg__JoystickParameters __attribute__((deprecated))
#else
# define DEPRECATED__my_parameters__msg__JoystickParameters __declspec(deprecated)
#endif

namespace my_parameters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoystickParameters_
{
  using Type = JoystickParameters_<ContainerAllocator>;

  explicit JoystickParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_command = false;
      this->turn_angle = 0.0f;
      this->position_command = false;
      this->position_direction = 0.0f;
      this->velocity = 0.0f;
      this->enabled = false;
    }
  }

  explicit JoystickParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_command = false;
      this->turn_angle = 0.0f;
      this->position_command = false;
      this->position_direction = 0.0f;
      this->velocity = 0.0f;
      this->enabled = false;
    }
  }

  // field types and members
  using _turn_command_type =
    bool;
  _turn_command_type turn_command;
  using _turn_angle_type =
    float;
  _turn_angle_type turn_angle;
  using _position_command_type =
    bool;
  _position_command_type position_command;
  using _position_direction_type =
    float;
  _position_direction_type position_direction;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _enabled_type =
    bool;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__turn_command(
    const bool & _arg)
  {
    this->turn_command = _arg;
    return *this;
  }
  Type & set__turn_angle(
    const float & _arg)
  {
    this->turn_angle = _arg;
    return *this;
  }
  Type & set__position_command(
    const bool & _arg)
  {
    this->position_command = _arg;
    return *this;
  }
  Type & set__position_direction(
    const float & _arg)
  {
    this->position_direction = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_parameters::msg::JoystickParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_parameters::msg::JoystickParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::JoystickParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::JoystickParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_parameters__msg__JoystickParameters
    std::shared_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_parameters__msg__JoystickParameters
    std::shared_ptr<my_parameters::msg::JoystickParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoystickParameters_ & other) const
  {
    if (this->turn_command != other.turn_command) {
      return false;
    }
    if (this->turn_angle != other.turn_angle) {
      return false;
    }
    if (this->position_command != other.position_command) {
      return false;
    }
    if (this->position_direction != other.position_direction) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoystickParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoystickParameters_

// alias to use template instance with default allocator
using JoystickParameters =
  my_parameters::msg::JoystickParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_HPP_
