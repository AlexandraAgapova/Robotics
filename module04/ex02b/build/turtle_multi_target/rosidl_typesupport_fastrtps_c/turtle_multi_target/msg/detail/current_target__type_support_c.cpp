// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice
#include "turtle_multi_target/msg/detail/current_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_multi_target/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_multi_target/msg/detail/current_target__struct.h"
#include "turtle_multi_target/msg/detail/current_target__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // target_name
#include "rosidl_runtime_c/string_functions.h"  // target_name

// forward declare type support functions


using _CurrentTarget__ros_msg_type = turtle_multi_target__msg__CurrentTarget;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
bool cdr_serialize_turtle_multi_target__msg__CurrentTarget(
  const turtle_multi_target__msg__CurrentTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_name
  {
    const rosidl_runtime_c__String * str = &ros_message->target_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: distance_to_target
  {
    cdr << ros_message->distance_to_target;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
bool cdr_deserialize_turtle_multi_target__msg__CurrentTarget(
  eprosima::fastcdr::Cdr & cdr,
  turtle_multi_target__msg__CurrentTarget * ros_message)
{
  // Field name: target_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_name.data) {
      rosidl_runtime_c__String__init(&ros_message->target_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_name'\n");
      return false;
    }
  }

  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  // Field name: distance_to_target
  {
    cdr >> ros_message->distance_to_target;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
size_t get_serialized_size_turtle_multi_target__msg__CurrentTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurrentTarget__ros_msg_type * ros_message = static_cast<const _CurrentTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_name.size + 1);

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_target
  {
    size_t item_size = sizeof(ros_message->distance_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
size_t max_serialized_size_turtle_multi_target__msg__CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: target_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: distance_to_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtle_multi_target__msg__CurrentTarget;
    is_plain =
      (
      offsetof(DataType, distance_to_target) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
bool cdr_serialize_key_turtle_multi_target__msg__CurrentTarget(
  const turtle_multi_target__msg__CurrentTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_name
  {
    const rosidl_runtime_c__String * str = &ros_message->target_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: distance_to_target
  {
    cdr << ros_message->distance_to_target;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
size_t get_serialized_size_key_turtle_multi_target__msg__CurrentTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurrentTarget__ros_msg_type * ros_message = static_cast<const _CurrentTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_name.size + 1);

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_target
  {
    size_t item_size = sizeof(ros_message->distance_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_multi_target
size_t max_serialized_size_key_turtle_multi_target__msg__CurrentTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: target_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: distance_to_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtle_multi_target__msg__CurrentTarget;
    is_plain =
      (
      offsetof(DataType, distance_to_target) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CurrentTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const turtle_multi_target__msg__CurrentTarget * ros_message = static_cast<const turtle_multi_target__msg__CurrentTarget *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_turtle_multi_target__msg__CurrentTarget(ros_message, cdr);
}

static bool _CurrentTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  turtle_multi_target__msg__CurrentTarget * ros_message = static_cast<turtle_multi_target__msg__CurrentTarget *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_turtle_multi_target__msg__CurrentTarget(cdr, ros_message);
}

static uint32_t _CurrentTarget__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_multi_target__msg__CurrentTarget(
      untyped_ros_message, 0));
}

static size_t _CurrentTarget__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtle_multi_target__msg__CurrentTarget(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CurrentTarget = {
  "turtle_multi_target::msg",
  "CurrentTarget",
  _CurrentTarget__cdr_serialize,
  _CurrentTarget__cdr_deserialize,
  _CurrentTarget__get_serialized_size,
  _CurrentTarget__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CurrentTarget__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CurrentTarget,
  get_message_typesupport_handle_function,
  &turtle_multi_target__msg__CurrentTarget__get_type_hash,
  &turtle_multi_target__msg__CurrentTarget__get_type_description,
  &turtle_multi_target__msg__CurrentTarget__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_multi_target, msg, CurrentTarget)() {
  return &_CurrentTarget__type_support;
}

#if defined(__cplusplus)
}
#endif
