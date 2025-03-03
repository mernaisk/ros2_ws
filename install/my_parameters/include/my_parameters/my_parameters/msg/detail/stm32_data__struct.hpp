// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_HPP_
#define MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_parameters__msg__Stm32Data __attribute__((deprecated))
#else
# define DEPRECATED__my_parameters__msg__Stm32Data __declspec(deprecated)
#endif

namespace my_parameters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Stm32Data_
{
  using Type = Stm32Data_<ContainerAllocator>;

  explicit Stm32Data_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor1_fr = 0l;
      this->motor2_fr = 0l;
      this->motor3_fr = 0l;
      this->motor1_fl = 0l;
      this->motor2_fl = 0l;
      this->motor3_fl = 0l;
      this->motor1_rr = 0l;
      this->motor2_rr = 0l;
      this->motor3_rr = 0l;
      this->motor1_rl = 0l;
      this->motor2_rl = 0l;
      this->motor3_rl = 0l;
      this->enabled = false;
    }
  }

  explicit Stm32Data_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor1_fr = 0l;
      this->motor2_fr = 0l;
      this->motor3_fr = 0l;
      this->motor1_fl = 0l;
      this->motor2_fl = 0l;
      this->motor3_fl = 0l;
      this->motor1_rr = 0l;
      this->motor2_rr = 0l;
      this->motor3_rr = 0l;
      this->motor1_rl = 0l;
      this->motor2_rl = 0l;
      this->motor3_rl = 0l;
      this->enabled = false;
    }
  }

  // field types and members
  using _motor1_fr_type =
    int32_t;
  _motor1_fr_type motor1_fr;
  using _motor2_fr_type =
    int32_t;
  _motor2_fr_type motor2_fr;
  using _motor3_fr_type =
    int32_t;
  _motor3_fr_type motor3_fr;
  using _motor1_fl_type =
    int32_t;
  _motor1_fl_type motor1_fl;
  using _motor2_fl_type =
    int32_t;
  _motor2_fl_type motor2_fl;
  using _motor3_fl_type =
    int32_t;
  _motor3_fl_type motor3_fl;
  using _motor1_rr_type =
    int32_t;
  _motor1_rr_type motor1_rr;
  using _motor2_rr_type =
    int32_t;
  _motor2_rr_type motor2_rr;
  using _motor3_rr_type =
    int32_t;
  _motor3_rr_type motor3_rr;
  using _motor1_rl_type =
    int32_t;
  _motor1_rl_type motor1_rl;
  using _motor2_rl_type =
    int32_t;
  _motor2_rl_type motor2_rl;
  using _motor3_rl_type =
    int32_t;
  _motor3_rl_type motor3_rl;
  using _enabled_type =
    bool;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__motor1_fr(
    const int32_t & _arg)
  {
    this->motor1_fr = _arg;
    return *this;
  }
  Type & set__motor2_fr(
    const int32_t & _arg)
  {
    this->motor2_fr = _arg;
    return *this;
  }
  Type & set__motor3_fr(
    const int32_t & _arg)
  {
    this->motor3_fr = _arg;
    return *this;
  }
  Type & set__motor1_fl(
    const int32_t & _arg)
  {
    this->motor1_fl = _arg;
    return *this;
  }
  Type & set__motor2_fl(
    const int32_t & _arg)
  {
    this->motor2_fl = _arg;
    return *this;
  }
  Type & set__motor3_fl(
    const int32_t & _arg)
  {
    this->motor3_fl = _arg;
    return *this;
  }
  Type & set__motor1_rr(
    const int32_t & _arg)
  {
    this->motor1_rr = _arg;
    return *this;
  }
  Type & set__motor2_rr(
    const int32_t & _arg)
  {
    this->motor2_rr = _arg;
    return *this;
  }
  Type & set__motor3_rr(
    const int32_t & _arg)
  {
    this->motor3_rr = _arg;
    return *this;
  }
  Type & set__motor1_rl(
    const int32_t & _arg)
  {
    this->motor1_rl = _arg;
    return *this;
  }
  Type & set__motor2_rl(
    const int32_t & _arg)
  {
    this->motor2_rl = _arg;
    return *this;
  }
  Type & set__motor3_rl(
    const int32_t & _arg)
  {
    this->motor3_rl = _arg;
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
    my_parameters::msg::Stm32Data_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_parameters::msg::Stm32Data_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::Stm32Data_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::Stm32Data_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_parameters__msg__Stm32Data
    std::shared_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_parameters__msg__Stm32Data
    std::shared_ptr<my_parameters::msg::Stm32Data_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stm32Data_ & other) const
  {
    if (this->motor1_fr != other.motor1_fr) {
      return false;
    }
    if (this->motor2_fr != other.motor2_fr) {
      return false;
    }
    if (this->motor3_fr != other.motor3_fr) {
      return false;
    }
    if (this->motor1_fl != other.motor1_fl) {
      return false;
    }
    if (this->motor2_fl != other.motor2_fl) {
      return false;
    }
    if (this->motor3_fl != other.motor3_fl) {
      return false;
    }
    if (this->motor1_rr != other.motor1_rr) {
      return false;
    }
    if (this->motor2_rr != other.motor2_rr) {
      return false;
    }
    if (this->motor3_rr != other.motor3_rr) {
      return false;
    }
    if (this->motor1_rl != other.motor1_rl) {
      return false;
    }
    if (this->motor2_rl != other.motor2_rl) {
      return false;
    }
    if (this->motor3_rl != other.motor3_rl) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stm32Data_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stm32Data_

// alias to use template instance with default allocator
using Stm32Data =
  my_parameters::msg::Stm32Data_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_HPP_
