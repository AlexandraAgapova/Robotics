// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_cleaning_robot:action/CleaningTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_cleaning_robot/action/cleaning_task.hpp"


#ifndef ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_
#define ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_cleaning_robot/action/detail/cleaning_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Goal_target_y
{
public:
  explicit Init_CleaningTask_Goal_target_y(::action_cleaning_robot::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_Goal target_y(::action_cleaning_robot::action::CleaningTask_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_target_x
{
public:
  explicit Init_CleaningTask_Goal_target_x(::action_cleaning_robot::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Goal_target_y target_x(::action_cleaning_robot::action::CleaningTask_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_CleaningTask_Goal_target_y(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_area_size
{
public:
  explicit Init_CleaningTask_Goal_area_size(::action_cleaning_robot::action::CleaningTask_Goal & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Goal_target_x area_size(::action_cleaning_robot::action::CleaningTask_Goal::_area_size_type arg)
  {
    msg_.area_size = std::move(arg);
    return Init_CleaningTask_Goal_target_x(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Goal msg_;
};

class Init_CleaningTask_Goal_task_type
{
public:
  Init_CleaningTask_Goal_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Goal_area_size task_type(::action_cleaning_robot::action::CleaningTask_Goal::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_CleaningTask_Goal_area_size(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_Goal>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_Goal_task_type();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Result_total_distance
{
public:
  explicit Init_CleaningTask_Result_total_distance(::action_cleaning_robot::action::CleaningTask_Result & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_Result total_distance(::action_cleaning_robot::action::CleaningTask_Result::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Result msg_;
};

class Init_CleaningTask_Result_cleaned_points
{
public:
  explicit Init_CleaningTask_Result_cleaned_points(::action_cleaning_robot::action::CleaningTask_Result & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Result_total_distance cleaned_points(::action_cleaning_robot::action::CleaningTask_Result::_cleaned_points_type arg)
  {
    msg_.cleaned_points = std::move(arg);
    return Init_CleaningTask_Result_total_distance(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Result msg_;
};

class Init_CleaningTask_Result_success
{
public:
  Init_CleaningTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Result_cleaned_points success(::action_cleaning_robot::action::CleaningTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CleaningTask_Result_cleaned_points(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_Result>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_Result_success();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_Feedback_current_y
{
public:
  explicit Init_CleaningTask_Feedback_current_y(::action_cleaning_robot::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_Feedback current_y(::action_cleaning_robot::action::CleaningTask_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_current_x
{
public:
  explicit Init_CleaningTask_Feedback_current_x(::action_cleaning_robot::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Feedback_current_y current_x(::action_cleaning_robot::action::CleaningTask_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_CleaningTask_Feedback_current_y(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_current_cleaned_points
{
public:
  explicit Init_CleaningTask_Feedback_current_cleaned_points(::action_cleaning_robot::action::CleaningTask_Feedback & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_Feedback_current_x current_cleaned_points(::action_cleaning_robot::action::CleaningTask_Feedback::_current_cleaned_points_type arg)
  {
    msg_.current_cleaned_points = std::move(arg);
    return Init_CleaningTask_Feedback_current_x(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Feedback msg_;
};

class Init_CleaningTask_Feedback_progress_percent
{
public:
  Init_CleaningTask_Feedback_progress_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_Feedback_current_cleaned_points progress_percent(::action_cleaning_robot::action::CleaningTask_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return Init_CleaningTask_Feedback_current_cleaned_points(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_Feedback>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_Feedback_progress_percent();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_SendGoal_Request_goal
{
public:
  explicit Init_CleaningTask_SendGoal_Request_goal(::action_cleaning_robot::action::CleaningTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Request goal(::action_cleaning_robot::action::CleaningTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Request msg_;
};

class Init_CleaningTask_SendGoal_Request_goal_id
{
public:
  Init_CleaningTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_SendGoal_Request_goal goal_id(::action_cleaning_robot::action::CleaningTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CleaningTask_SendGoal_Request_goal(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_SendGoal_Request>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_SendGoal_Request_goal_id();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_SendGoal_Response_stamp
{
public:
  explicit Init_CleaningTask_SendGoal_Response_stamp(::action_cleaning_robot::action::CleaningTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Response stamp(::action_cleaning_robot::action::CleaningTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Response msg_;
};

class Init_CleaningTask_SendGoal_Response_accepted
{
public:
  Init_CleaningTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_SendGoal_Response_stamp accepted(::action_cleaning_robot::action::CleaningTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CleaningTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_SendGoal_Response>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_SendGoal_Response_accepted();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_SendGoal_Event_response
{
public:
  explicit Init_CleaningTask_SendGoal_Event_response(::action_cleaning_robot::action::CleaningTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Event response(::action_cleaning_robot::action::CleaningTask_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Event msg_;
};

class Init_CleaningTask_SendGoal_Event_request
{
public:
  explicit Init_CleaningTask_SendGoal_Event_request(::action_cleaning_robot::action::CleaningTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_SendGoal_Event_response request(::action_cleaning_robot::action::CleaningTask_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CleaningTask_SendGoal_Event_response(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Event msg_;
};

class Init_CleaningTask_SendGoal_Event_info
{
public:
  Init_CleaningTask_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_SendGoal_Event_request info(::action_cleaning_robot::action::CleaningTask_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CleaningTask_SendGoal_Event_request(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_SendGoal_Event>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_SendGoal_Event_info();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_GetResult_Request_goal_id
{
public:
  Init_CleaningTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_cleaning_robot::action::CleaningTask_GetResult_Request goal_id(::action_cleaning_robot::action::CleaningTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_GetResult_Request>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_GetResult_Request_goal_id();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_GetResult_Response_result
{
public:
  explicit Init_CleaningTask_GetResult_Response_result(::action_cleaning_robot::action::CleaningTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_GetResult_Response result(::action_cleaning_robot::action::CleaningTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Response msg_;
};

class Init_CleaningTask_GetResult_Response_status
{
public:
  Init_CleaningTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_GetResult_Response_result status(::action_cleaning_robot::action::CleaningTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CleaningTask_GetResult_Response_result(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_GetResult_Response>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_GetResult_Response_status();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_GetResult_Event_response
{
public:
  explicit Init_CleaningTask_GetResult_Event_response(::action_cleaning_robot::action::CleaningTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_GetResult_Event response(::action_cleaning_robot::action::CleaningTask_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Event msg_;
};

class Init_CleaningTask_GetResult_Event_request
{
public:
  explicit Init_CleaningTask_GetResult_Event_request(::action_cleaning_robot::action::CleaningTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_CleaningTask_GetResult_Event_response request(::action_cleaning_robot::action::CleaningTask_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CleaningTask_GetResult_Event_response(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Event msg_;
};

class Init_CleaningTask_GetResult_Event_info
{
public:
  Init_CleaningTask_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_GetResult_Event_request info(::action_cleaning_robot::action::CleaningTask_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CleaningTask_GetResult_Event_request(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_GetResult_Event>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_GetResult_Event_info();
}

}  // namespace action_cleaning_robot


namespace action_cleaning_robot
{

namespace action
{

namespace builder
{

class Init_CleaningTask_FeedbackMessage_feedback
{
public:
  explicit Init_CleaningTask_FeedbackMessage_feedback(::action_cleaning_robot::action::CleaningTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_cleaning_robot::action::CleaningTask_FeedbackMessage feedback(::action_cleaning_robot::action::CleaningTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_FeedbackMessage msg_;
};

class Init_CleaningTask_FeedbackMessage_goal_id
{
public:
  Init_CleaningTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleaningTask_FeedbackMessage_feedback goal_id(::action_cleaning_robot::action::CleaningTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CleaningTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_cleaning_robot::action::CleaningTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_cleaning_robot::action::CleaningTask_FeedbackMessage>()
{
  return action_cleaning_robot::action::builder::Init_CleaningTask_FeedbackMessage_goal_id();
}

}  // namespace action_cleaning_robot

#endif  // ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__BUILDER_HPP_
