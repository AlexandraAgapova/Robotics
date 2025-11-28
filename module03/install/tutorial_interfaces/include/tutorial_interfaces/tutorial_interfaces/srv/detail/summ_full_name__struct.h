// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/summ_full_name.h"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'surname'
// Member 'name'
// Member 'patronymic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SummFullName in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SummFullName_Request
{
  rosidl_runtime_c__String surname;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String patronymic;
} tutorial_interfaces__srv__SummFullName_Request;

// Struct for a sequence of tutorial_interfaces__srv__SummFullName_Request.
typedef struct tutorial_interfaces__srv__SummFullName_Request__Sequence
{
  tutorial_interfaces__srv__SummFullName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SummFullName_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SummFullName in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SummFullName_Response
{
  rosidl_runtime_c__String full_name;
} tutorial_interfaces__srv__SummFullName_Response;

// Struct for a sequence of tutorial_interfaces__srv__SummFullName_Response.
typedef struct tutorial_interfaces__srv__SummFullName_Response__Sequence
{
  tutorial_interfaces__srv__SummFullName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SummFullName_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tutorial_interfaces__srv__SummFullName_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tutorial_interfaces__srv__SummFullName_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SummFullName in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SummFullName_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tutorial_interfaces__srv__SummFullName_Request__Sequence request;
  tutorial_interfaces__srv__SummFullName_Response__Sequence response;
} tutorial_interfaces__srv__SummFullName_Event;

// Struct for a sequence of tutorial_interfaces__srv__SummFullName_Event.
typedef struct tutorial_interfaces__srv__SummFullName_Event__Sequence
{
  tutorial_interfaces__srv__SummFullName_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SummFullName_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_H_
