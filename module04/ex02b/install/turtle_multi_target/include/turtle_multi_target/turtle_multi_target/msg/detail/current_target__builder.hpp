// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_multi_target/msg/current_target.hpp"


#ifndef TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_
#define TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_multi_target/msg/detail/current_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_multi_target
{

namespace msg
{

namespace builder
{

class Init_CurrentTarget_distance_to_target
{
public:
  explicit Init_CurrentTarget_distance_to_target(::turtle_multi_target::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  ::turtle_multi_target::msg::CurrentTarget distance_to_target(::turtle_multi_target::msg::CurrentTarget::_distance_to_target_type arg)
  {
    msg_.distance_to_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_multi_target::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_y
{
public:
  explicit Init_CurrentTarget_target_y(::turtle_multi_target::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  Init_CurrentTarget_distance_to_target target_y(::turtle_multi_target::msg::CurrentTarget::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_CurrentTarget_distance_to_target(msg_);
  }

private:
  ::turtle_multi_target::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_x
{
public:
  explicit Init_CurrentTarget_target_x(::turtle_multi_target::msg::CurrentTarget & msg)
  : msg_(msg)
  {}
  Init_CurrentTarget_target_y target_x(::turtle_multi_target::msg::CurrentTarget::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_CurrentTarget_target_y(msg_);
  }

private:
  ::turtle_multi_target::msg::CurrentTarget msg_;
};

class Init_CurrentTarget_target_name
{
public:
  Init_CurrentTarget_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentTarget_target_x target_name(::turtle_multi_target::msg::CurrentTarget::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_CurrentTarget_target_x(msg_);
  }

private:
  ::turtle_multi_target::msg::CurrentTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_multi_target::msg::CurrentTarget>()
{
  return turtle_multi_target::msg::builder::Init_CurrentTarget_target_name();
}

}  // namespace turtle_multi_target

#endif  // TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__BUILDER_HPP_
