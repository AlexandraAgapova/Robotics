// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_multi_target/msg/current_target.hpp"


#ifndef TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_
#define TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_multi_target/msg/detail/current_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_multi_target
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: distance_to_target
  {
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentTarget & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtle_multi_target

namespace rosidl_generator_traits
{

[[deprecated("use turtle_multi_target::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_multi_target::msg::CurrentTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_multi_target::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_multi_target::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_multi_target::msg::CurrentTarget & msg)
{
  return turtle_multi_target::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_multi_target::msg::CurrentTarget>()
{
  return "turtle_multi_target::msg::CurrentTarget";
}

template<>
inline const char * name<turtle_multi_target::msg::CurrentTarget>()
{
  return "turtle_multi_target/msg/CurrentTarget";
}

template<>
struct has_fixed_size<turtle_multi_target::msg::CurrentTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_multi_target::msg::CurrentTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_multi_target::msg::CurrentTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__TRAITS_HPP_
