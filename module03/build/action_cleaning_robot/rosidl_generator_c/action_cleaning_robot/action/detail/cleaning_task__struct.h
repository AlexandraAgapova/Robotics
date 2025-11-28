// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_cleaning_robot:action/CleaningTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_cleaning_robot/action/cleaning_task.h"


#ifndef ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_
#define ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_Goal
{
  /// "clean_square", "clean_circle", "return_home"
  rosidl_runtime_c__String task_type;
  /// размер области (сторона квадрата или радиус)
  double area_size;
  /// цель X (для return_home)
  double target_x;
  /// цель Y (для return_home)
  double target_y;
} action_cleaning_robot__action__CleaningTask_Goal;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_Goal.
typedef struct action_cleaning_robot__action__CleaningTask_Goal__Sequence
{
  action_cleaning_robot__action__CleaningTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_Result
{
  bool success;
  int32_t cleaned_points;
  double total_distance;
} action_cleaning_robot__action__CleaningTask_Result;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_Result.
typedef struct action_cleaning_robot__action__CleaningTask_Result__Sequence
{
  action_cleaning_robot__action__CleaningTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_Feedback
{
  int32_t progress_percent;
  int32_t current_cleaned_points;
  double current_x;
  double current_y;
} action_cleaning_robot__action__CleaningTask_Feedback;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_Feedback.
typedef struct action_cleaning_robot__action__CleaningTask_Feedback__Sequence
{
  action_cleaning_robot__action__CleaningTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_cleaning_robot/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_cleaning_robot__action__CleaningTask_Goal goal;
} action_cleaning_robot__action__CleaningTask_SendGoal_Request;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_SendGoal_Request.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Request__Sequence
{
  action_cleaning_robot__action__CleaningTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_cleaning_robot__action__CleaningTask_SendGoal_Response;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_SendGoal_Response.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Response__Sequence
{
  action_cleaning_robot__action__CleaningTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_cleaning_robot__action__CleaningTask_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_cleaning_robot__action__CleaningTask_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_cleaning_robot__action__CleaningTask_SendGoal_Request__Sequence request;
  action_cleaning_robot__action__CleaningTask_SendGoal_Response__Sequence response;
} action_cleaning_robot__action__CleaningTask_SendGoal_Event;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_SendGoal_Event.
typedef struct action_cleaning_robot__action__CleaningTask_SendGoal_Event__Sequence
{
  action_cleaning_robot__action__CleaningTask_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_cleaning_robot__action__CleaningTask_GetResult_Request;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_GetResult_Request.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Request__Sequence
{
  action_cleaning_robot__action__CleaningTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_cleaning_robot/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Response
{
  int8_t status;
  action_cleaning_robot__action__CleaningTask_Result result;
} action_cleaning_robot__action__CleaningTask_GetResult_Response;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_GetResult_Response.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Response__Sequence
{
  action_cleaning_robot__action__CleaningTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_cleaning_robot__action__CleaningTask_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_cleaning_robot__action__CleaningTask_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_cleaning_robot__action__CleaningTask_GetResult_Request__Sequence request;
  action_cleaning_robot__action__CleaningTask_GetResult_Response__Sequence response;
} action_cleaning_robot__action__CleaningTask_GetResult_Event;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_GetResult_Event.
typedef struct action_cleaning_robot__action__CleaningTask_GetResult_Event__Sequence
{
  action_cleaning_robot__action__CleaningTask_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_cleaning_robot/action/detail/cleaning_task__struct.h"

/// Struct defined in action/CleaningTask in the package action_cleaning_robot.
typedef struct action_cleaning_robot__action__CleaningTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_cleaning_robot__action__CleaningTask_Feedback feedback;
} action_cleaning_robot__action__CleaningTask_FeedbackMessage;

// Struct for a sequence of action_cleaning_robot__action__CleaningTask_FeedbackMessage.
typedef struct action_cleaning_robot__action__CleaningTask_FeedbackMessage__Sequence
{
  action_cleaning_robot__action__CleaningTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_cleaning_robot__action__CleaningTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_H_
