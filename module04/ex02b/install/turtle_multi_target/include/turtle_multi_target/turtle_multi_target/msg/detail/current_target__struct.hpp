// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_multi_target/msg/current_target.hpp"


#ifndef TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_HPP_
#define TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_multi_target__msg__CurrentTarget __attribute__((deprecated))
#else
# define DEPRECATED__turtle_multi_target__msg__CurrentTarget __declspec(deprecated)
#endif

namespace turtle_multi_target
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentTarget_
{
  using Type = CurrentTarget_<ContainerAllocator>;

  explicit CurrentTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->distance_to_target = 0.0;
    }
  }

  explicit CurrentTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->distance_to_target = 0.0;
    }
  }

  // field types and members
  using _target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_name_type target_name;
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;
  using _distance_to_target_type =
    double;
  _distance_to_target_type distance_to_target;

  // setters for named parameter idiom
  Type & set__target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_name = _arg;
    return *this;
  }
  Type & set__target_x(
    const double & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const double & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__distance_to_target(
    const double & _arg)
  {
    this->distance_to_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_multi_target__msg__CurrentTarget
    std::shared_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_multi_target__msg__CurrentTarget
    std::shared_ptr<turtle_multi_target::msg::CurrentTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentTarget_ & other) const
  {
    if (this->target_name != other.target_name) {
      return false;
    }
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->distance_to_target != other.distance_to_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentTarget_

// alias to use template instance with default allocator
using CurrentTarget =
  turtle_multi_target::msg::CurrentTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_multi_target

#endif  // TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_HPP_
