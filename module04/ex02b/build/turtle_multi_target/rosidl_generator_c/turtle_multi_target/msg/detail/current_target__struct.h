// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_multi_target/msg/current_target.h"


#ifndef TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_
#define TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CurrentTarget in the package turtle_multi_target.
typedef struct turtle_multi_target__msg__CurrentTarget
{
  rosidl_runtime_c__String target_name;
  double target_x;
  double target_y;
  double distance_to_target;
} turtle_multi_target__msg__CurrentTarget;

// Struct for a sequence of turtle_multi_target__msg__CurrentTarget.
typedef struct turtle_multi_target__msg__CurrentTarget__Sequence
{
  turtle_multi_target__msg__CurrentTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_multi_target__msg__CurrentTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_MULTI_TARGET__MSG__DETAIL__CURRENT_TARGET__STRUCT_H_
