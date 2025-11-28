// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_cleaning_robot:action/CleaningTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_cleaning_robot/action/cleaning_task.hpp"


#ifndef ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_HPP_
#define ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Goal __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_Goal_
{
  using Type = CleaningTask_Goal_<ContainerAllocator>;

  explicit CleaningTask_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = "";
      this->area_size = 0.0;
      this->target_x = 0.0;
      this->target_y = 0.0;
    }
  }

  explicit CleaningTask_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = "";
      this->area_size = 0.0;
      this->target_x = 0.0;
      this->target_y = 0.0;
    }
  }

  // field types and members
  using _task_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type_type task_type;
  using _area_size_type =
    double;
  _area_size_type area_size;
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;

  // setters for named parameter idiom
  Type & set__task_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__area_size(
    const double & _arg)
  {
    this->area_size = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Goal
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Goal
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_Goal_ & other) const
  {
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->area_size != other.area_size) {
      return false;
    }
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_Goal_

// alias to use template instance with default allocator
using CleaningTask_Goal =
  action_cleaning_robot::action::CleaningTask_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Result __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_Result_
{
  using Type = CleaningTask_Result_<ContainerAllocator>;

  explicit CleaningTask_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->cleaned_points = 0l;
      this->total_distance = 0.0;
    }
  }

  explicit CleaningTask_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->cleaned_points = 0l;
      this->total_distance = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _cleaned_points_type =
    int32_t;
  _cleaned_points_type cleaned_points;
  using _total_distance_type =
    double;
  _total_distance_type total_distance;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__cleaned_points(
    const int32_t & _arg)
  {
    this->cleaned_points = _arg;
    return *this;
  }
  Type & set__total_distance(
    const double & _arg)
  {
    this->total_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Result
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Result
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->cleaned_points != other.cleaned_points) {
      return false;
    }
    if (this->total_distance != other.total_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_Result_

// alias to use template instance with default allocator
using CleaningTask_Result =
  action_cleaning_robot::action::CleaningTask_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_Feedback __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_Feedback_
{
  using Type = CleaningTask_Feedback_<ContainerAllocator>;

  explicit CleaningTask_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress_percent = 0l;
      this->current_cleaned_points = 0l;
      this->current_x = 0.0;
      this->current_y = 0.0;
    }
  }

  explicit CleaningTask_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress_percent = 0l;
      this->current_cleaned_points = 0l;
      this->current_x = 0.0;
      this->current_y = 0.0;
    }
  }

  // field types and members
  using _progress_percent_type =
    int32_t;
  _progress_percent_type progress_percent;
  using _current_cleaned_points_type =
    int32_t;
  _current_cleaned_points_type current_cleaned_points;
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;

  // setters for named parameter idiom
  Type & set__progress_percent(
    const int32_t & _arg)
  {
    this->progress_percent = _arg;
    return *this;
  }
  Type & set__current_cleaned_points(
    const int32_t & _arg)
  {
    this->current_cleaned_points = _arg;
    return *this;
  }
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Feedback
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_Feedback
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_Feedback_ & other) const
  {
    if (this->progress_percent != other.progress_percent) {
      return false;
    }
    if (this->current_cleaned_points != other.current_cleaned_points) {
      return false;
    }
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_Feedback_

// alias to use template instance with default allocator
using CleaningTask_Feedback =
  action_cleaning_robot::action::CleaningTask_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "action_cleaning_robot/action/detail/cleaning_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Request __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_SendGoal_Request_
{
  using Type = CleaningTask_SendGoal_Request_<ContainerAllocator>;

  explicit CleaningTask_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CleaningTask_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_cleaning_robot::action::CleaningTask_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Request
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Request
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_SendGoal_Request_

// alias to use template instance with default allocator
using CleaningTask_SendGoal_Request =
  action_cleaning_robot::action::CleaningTask_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Response __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_SendGoal_Response_
{
  using Type = CleaningTask_SendGoal_Response_<ContainerAllocator>;

  explicit CleaningTask_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CleaningTask_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Response
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Response
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_SendGoal_Response_

// alias to use template instance with default allocator
using CleaningTask_SendGoal_Response =
  action_cleaning_robot::action::CleaningTask_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Event __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_SendGoal_Event_
{
  using Type = CleaningTask_SendGoal_Event_<ContainerAllocator>;

  explicit CleaningTask_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CleaningTask_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Event
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_SendGoal_Event
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_SendGoal_Event_

// alias to use template instance with default allocator
using CleaningTask_SendGoal_Event =
  action_cleaning_robot::action::CleaningTask_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot

namespace action_cleaning_robot
{

namespace action
{

struct CleaningTask_SendGoal
{
  using Request = action_cleaning_robot::action::CleaningTask_SendGoal_Request;
  using Response = action_cleaning_robot::action::CleaningTask_SendGoal_Response;
  using Event = action_cleaning_robot::action::CleaningTask_SendGoal_Event;
};

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Request __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_GetResult_Request_
{
  using Type = CleaningTask_GetResult_Request_<ContainerAllocator>;

  explicit CleaningTask_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CleaningTask_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Request
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Request
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_GetResult_Request_

// alias to use template instance with default allocator
using CleaningTask_GetResult_Request =
  action_cleaning_robot::action::CleaningTask_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'result'
// already included above
// #include "action_cleaning_robot/action/detail/cleaning_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Response __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_GetResult_Response_
{
  using Type = CleaningTask_GetResult_Response_<ContainerAllocator>;

  explicit CleaningTask_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CleaningTask_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_cleaning_robot::action::CleaningTask_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Response
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Response
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_GetResult_Response_

// alias to use template instance with default allocator
using CleaningTask_GetResult_Response =
  action_cleaning_robot::action::CleaningTask_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Event __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_GetResult_Event_
{
  using Type = CleaningTask_GetResult_Event_<ContainerAllocator>;

  explicit CleaningTask_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CleaningTask_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_cleaning_robot::action::CleaningTask_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Event
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_GetResult_Event
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_GetResult_Event_

// alias to use template instance with default allocator
using CleaningTask_GetResult_Event =
  action_cleaning_robot::action::CleaningTask_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot

namespace action_cleaning_robot
{

namespace action
{

struct CleaningTask_GetResult
{
  using Request = action_cleaning_robot::action::CleaningTask_GetResult_Request;
  using Response = action_cleaning_robot::action::CleaningTask_GetResult_Response;
  using Event = action_cleaning_robot::action::CleaningTask_GetResult_Event;
};

}  // namespace action

}  // namespace action_cleaning_robot


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_cleaning_robot/action/detail/cleaning_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_cleaning_robot__action__CleaningTask_FeedbackMessage __declspec(deprecated)
#endif

namespace action_cleaning_robot
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CleaningTask_FeedbackMessage_
{
  using Type = CleaningTask_FeedbackMessage_<ContainerAllocator>;

  explicit CleaningTask_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CleaningTask_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_cleaning_robot::action::CleaningTask_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_FeedbackMessage
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_cleaning_robot__action__CleaningTask_FeedbackMessage
    std::shared_ptr<action_cleaning_robot::action::CleaningTask_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleaningTask_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleaningTask_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleaningTask_FeedbackMessage_

// alias to use template instance with default allocator
using CleaningTask_FeedbackMessage =
  action_cleaning_robot::action::CleaningTask_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_cleaning_robot

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_cleaning_robot
{

namespace action
{

struct CleaningTask
{
  /// The goal message defined in the action definition.
  using Goal = action_cleaning_robot::action::CleaningTask_Goal;
  /// The result message defined in the action definition.
  using Result = action_cleaning_robot::action::CleaningTask_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_cleaning_robot::action::CleaningTask_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_cleaning_robot::action::CleaningTask_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_cleaning_robot::action::CleaningTask_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_cleaning_robot::action::CleaningTask_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CleaningTask CleaningTask;

}  // namespace action

}  // namespace action_cleaning_robot

#endif  // ACTION_CLEANING_ROBOT__ACTION__DETAIL__CLEANING_TASK__STRUCT_HPP_
