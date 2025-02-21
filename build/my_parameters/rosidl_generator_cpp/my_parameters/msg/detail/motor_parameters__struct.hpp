// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_HPP_
#define MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_parameters__msg__MotorParameters __attribute__((deprecated))
#else
# define DEPRECATED__my_parameters__msg__MotorParameters __declspec(deprecated)
#endif

namespace my_parameters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorParameters_
{
  using Type = MotorParameters_<ContainerAllocator>;

  explicit MotorParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha_a_fr = 0.0f;
      this->alpha_b_fr = 0.0f;
      this->alpha_c_fr = 0.0f;
      this->alpha_a_fl = 0.0f;
      this->alpha_b_fl = 0.0f;
      this->alpha_c_fl = 0.0f;
      this->alpha_a_rr = 0.0f;
      this->alpha_b_rr = 0.0f;
      this->alpha_c_rr = 0.0f;
      this->alpha_a_rl = 0.0f;
      this->alpha_b_rl = 0.0f;
      this->alpha_c_rl = 0.0f;
      this->move = false;
      this->pre_tight = false;
    }
  }

  explicit MotorParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha_a_fr = 0.0f;
      this->alpha_b_fr = 0.0f;
      this->alpha_c_fr = 0.0f;
      this->alpha_a_fl = 0.0f;
      this->alpha_b_fl = 0.0f;
      this->alpha_c_fl = 0.0f;
      this->alpha_a_rr = 0.0f;
      this->alpha_b_rr = 0.0f;
      this->alpha_c_rr = 0.0f;
      this->alpha_a_rl = 0.0f;
      this->alpha_b_rl = 0.0f;
      this->alpha_c_rl = 0.0f;
      this->move = false;
      this->pre_tight = false;
    }
  }

  // field types and members
  using _alpha_a_fr_type =
    float;
  _alpha_a_fr_type alpha_a_fr;
  using _alpha_b_fr_type =
    float;
  _alpha_b_fr_type alpha_b_fr;
  using _alpha_c_fr_type =
    float;
  _alpha_c_fr_type alpha_c_fr;
  using _alpha_a_fl_type =
    float;
  _alpha_a_fl_type alpha_a_fl;
  using _alpha_b_fl_type =
    float;
  _alpha_b_fl_type alpha_b_fl;
  using _alpha_c_fl_type =
    float;
  _alpha_c_fl_type alpha_c_fl;
  using _alpha_a_rr_type =
    float;
  _alpha_a_rr_type alpha_a_rr;
  using _alpha_b_rr_type =
    float;
  _alpha_b_rr_type alpha_b_rr;
  using _alpha_c_rr_type =
    float;
  _alpha_c_rr_type alpha_c_rr;
  using _alpha_a_rl_type =
    float;
  _alpha_a_rl_type alpha_a_rl;
  using _alpha_b_rl_type =
    float;
  _alpha_b_rl_type alpha_b_rl;
  using _alpha_c_rl_type =
    float;
  _alpha_c_rl_type alpha_c_rl;
  using _move_type =
    bool;
  _move_type move;
  using _pre_tight_type =
    bool;
  _pre_tight_type pre_tight;

  // setters for named parameter idiom
  Type & set__alpha_a_fr(
    const float & _arg)
  {
    this->alpha_a_fr = _arg;
    return *this;
  }
  Type & set__alpha_b_fr(
    const float & _arg)
  {
    this->alpha_b_fr = _arg;
    return *this;
  }
  Type & set__alpha_c_fr(
    const float & _arg)
  {
    this->alpha_c_fr = _arg;
    return *this;
  }
  Type & set__alpha_a_fl(
    const float & _arg)
  {
    this->alpha_a_fl = _arg;
    return *this;
  }
  Type & set__alpha_b_fl(
    const float & _arg)
  {
    this->alpha_b_fl = _arg;
    return *this;
  }
  Type & set__alpha_c_fl(
    const float & _arg)
  {
    this->alpha_c_fl = _arg;
    return *this;
  }
  Type & set__alpha_a_rr(
    const float & _arg)
  {
    this->alpha_a_rr = _arg;
    return *this;
  }
  Type & set__alpha_b_rr(
    const float & _arg)
  {
    this->alpha_b_rr = _arg;
    return *this;
  }
  Type & set__alpha_c_rr(
    const float & _arg)
  {
    this->alpha_c_rr = _arg;
    return *this;
  }
  Type & set__alpha_a_rl(
    const float & _arg)
  {
    this->alpha_a_rl = _arg;
    return *this;
  }
  Type & set__alpha_b_rl(
    const float & _arg)
  {
    this->alpha_b_rl = _arg;
    return *this;
  }
  Type & set__alpha_c_rl(
    const float & _arg)
  {
    this->alpha_c_rl = _arg;
    return *this;
  }
  Type & set__move(
    const bool & _arg)
  {
    this->move = _arg;
    return *this;
  }
  Type & set__pre_tight(
    const bool & _arg)
  {
    this->pre_tight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_parameters::msg::MotorParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_parameters::msg::MotorParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::MotorParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::MotorParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_parameters__msg__MotorParameters
    std::shared_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_parameters__msg__MotorParameters
    std::shared_ptr<my_parameters::msg::MotorParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorParameters_ & other) const
  {
    if (this->alpha_a_fr != other.alpha_a_fr) {
      return false;
    }
    if (this->alpha_b_fr != other.alpha_b_fr) {
      return false;
    }
    if (this->alpha_c_fr != other.alpha_c_fr) {
      return false;
    }
    if (this->alpha_a_fl != other.alpha_a_fl) {
      return false;
    }
    if (this->alpha_b_fl != other.alpha_b_fl) {
      return false;
    }
    if (this->alpha_c_fl != other.alpha_c_fl) {
      return false;
    }
    if (this->alpha_a_rr != other.alpha_a_rr) {
      return false;
    }
    if (this->alpha_b_rr != other.alpha_b_rr) {
      return false;
    }
    if (this->alpha_c_rr != other.alpha_c_rr) {
      return false;
    }
    if (this->alpha_a_rl != other.alpha_a_rl) {
      return false;
    }
    if (this->alpha_b_rl != other.alpha_b_rl) {
      return false;
    }
    if (this->alpha_c_rl != other.alpha_c_rl) {
      return false;
    }
    if (this->move != other.move) {
      return false;
    }
    if (this->pre_tight != other.pre_tight) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorParameters_

// alias to use template instance with default allocator
using MotorParameters =
  my_parameters::msg::MotorParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_HPP_
