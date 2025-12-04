// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_multi_target/msg/detail/current_target__rosidl_typesupport_introspection_c.h"
#include "turtle_multi_target/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_multi_target/msg/detail/current_target__functions.h"
#include "turtle_multi_target/msg/detail/current_target__struct.h"


// Include directives for member types
// Member `target_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_multi_target__msg__CurrentTarget__init(message_memory);
}

void turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_fini_function(void * message_memory)
{
  turtle_multi_target__msg__CurrentTarget__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_member_array[4] = {
  {
    "target_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_multi_target__msg__CurrentTarget, target_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_multi_target__msg__CurrentTarget, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_multi_target__msg__CurrentTarget, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_multi_target__msg__CurrentTarget, distance_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_members = {
  "turtle_multi_target__msg",  // message namespace
  "CurrentTarget",  // message name
  4,  // number of fields
  sizeof(turtle_multi_target__msg__CurrentTarget),
  false,  // has_any_key_member_
  turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_member_array,  // message members
  turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_type_support_handle = {
  0,
  &turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_members,
  get_message_typesupport_handle_function,
  &turtle_multi_target__msg__CurrentTarget__get_type_hash,
  &turtle_multi_target__msg__CurrentTarget__get_type_description,
  &turtle_multi_target__msg__CurrentTarget__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_multi_target
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_multi_target, msg, CurrentTarget)() {
  if (!turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_type_support_handle.typesupport_identifier) {
    turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_multi_target__msg__CurrentTarget__rosidl_typesupport_introspection_c__CurrentTarget_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
