// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_HPP_
#define MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_parameters__msg__DebugParameter __attribute__((deprecated))
#else
# define DEPRECATED__my_parameters__msg__DebugParameter __declspec(deprecated)
#endif

namespace my_parameters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugParameter_
{
  using Type = DebugParameter_<ContainerAllocator>;

  explicit DebugParameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha_r_fr = 0.0;
      this->alpha_b_fr = 0.0;
      this->z_l_fr = 0.0;
      this->alpha_r_fl = 0.0;
      this->alpha_b_fl = 0.0;
      this->z_l_fl = 0.0;
      this->alpha_r_rr = 0.0;
      this->alpha_b_rr = 0.0;
      this->z_l_rr = 0.0;
      this->alpha_r_rl = 0.0;
      this->alpha_b_rl = 0.0;
      this->z_l_rl = 0.0;
    }
  }

  explicit DebugParameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha_r_fr = 0.0;
      this->alpha_b_fr = 0.0;
      this->z_l_fr = 0.0;
      this->alpha_r_fl = 0.0;
      this->alpha_b_fl = 0.0;
      this->z_l_fl = 0.0;
      this->alpha_r_rr = 0.0;
      this->alpha_b_rr = 0.0;
      this->z_l_rr = 0.0;
      this->alpha_r_rl = 0.0;
      this->alpha_b_rl = 0.0;
      this->z_l_rl = 0.0;
    }
  }

  // field types and members
  using _alpha_r_fr_type =
    double;
  _alpha_r_fr_type alpha_r_fr;
  using _alpha_b_fr_type =
    double;
  _alpha_b_fr_type alpha_b_fr;
  using _z_l_fr_type =
    double;
  _z_l_fr_type z_l_fr;
  using _alpha_r_fl_type =
    double;
  _alpha_r_fl_type alpha_r_fl;
  using _alpha_b_fl_type =
    double;
  _alpha_b_fl_type alpha_b_fl;
  using _z_l_fl_type =
    double;
  _z_l_fl_type z_l_fl;
  using _alpha_r_rr_type =
    double;
  _alpha_r_rr_type alpha_r_rr;
  using _alpha_b_rr_type =
    double;
  _alpha_b_rr_type alpha_b_rr;
  using _z_l_rr_type =
    double;
  _z_l_rr_type z_l_rr;
  using _alpha_r_rl_type =
    double;
  _alpha_r_rl_type alpha_r_rl;
  using _alpha_b_rl_type =
    double;
  _alpha_b_rl_type alpha_b_rl;
  using _z_l_rl_type =
    double;
  _z_l_rl_type z_l_rl;

  // setters for named parameter idiom
  Type & set__alpha_r_fr(
    const double & _arg)
  {
    this->alpha_r_fr = _arg;
    return *this;
  }
  Type & set__alpha_b_fr(
    const double & _arg)
  {
    this->alpha_b_fr = _arg;
    return *this;
  }
  Type & set__z_l_fr(
    const double & _arg)
  {
    this->z_l_fr = _arg;
    return *this;
  }
  Type & set__alpha_r_fl(
    const double & _arg)
  {
    this->alpha_r_fl = _arg;
    return *this;
  }
  Type & set__alpha_b_fl(
    const double & _arg)
  {
    this->alpha_b_fl = _arg;
    return *this;
  }
  Type & set__z_l_fl(
    const double & _arg)
  {
    this->z_l_fl = _arg;
    return *this;
  }
  Type & set__alpha_r_rr(
    const double & _arg)
  {
    this->alpha_r_rr = _arg;
    return *this;
  }
  Type & set__alpha_b_rr(
    const double & _arg)
  {
    this->alpha_b_rr = _arg;
    return *this;
  }
  Type & set__z_l_rr(
    const double & _arg)
  {
    this->z_l_rr = _arg;
    return *this;
  }
  Type & set__alpha_r_rl(
    const double & _arg)
  {
    this->alpha_r_rl = _arg;
    return *this;
  }
  Type & set__alpha_b_rl(
    const double & _arg)
  {
    this->alpha_b_rl = _arg;
    return *this;
  }
  Type & set__z_l_rl(
    const double & _arg)
  {
    this->z_l_rl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_parameters::msg::DebugParameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_parameters::msg::DebugParameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::DebugParameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_parameters::msg::DebugParameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_parameters__msg__DebugParameter
    std::shared_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_parameters__msg__DebugParameter
    std::shared_ptr<my_parameters::msg::DebugParameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugParameter_ & other) const
  {
    if (this->alpha_r_fr != other.alpha_r_fr) {
      return false;
    }
    if (this->alpha_b_fr != other.alpha_b_fr) {
      return false;
    }
    if (this->z_l_fr != other.z_l_fr) {
      return false;
    }
    if (this->alpha_r_fl != other.alpha_r_fl) {
      return false;
    }
    if (this->alpha_b_fl != other.alpha_b_fl) {
      return false;
    }
    if (this->z_l_fl != other.z_l_fl) {
      return false;
    }
    if (this->alpha_r_rr != other.alpha_r_rr) {
      return false;
    }
    if (this->alpha_b_rr != other.alpha_b_rr) {
      return false;
    }
    if (this->z_l_rr != other.z_l_rr) {
      return false;
    }
    if (this->alpha_r_rl != other.alpha_r_rl) {
      return false;
    }
    if (this->alpha_b_rl != other.alpha_b_rl) {
      return false;
    }
    if (this->z_l_rl != other.z_l_rl) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugParameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugParameter_

// alias to use template instance with default allocator
using DebugParameter =
  my_parameters::msg::DebugParameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_parameters

#endif  // MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_HPP_
