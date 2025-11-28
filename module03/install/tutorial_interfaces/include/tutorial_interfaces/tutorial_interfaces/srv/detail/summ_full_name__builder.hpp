// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/summ_full_name.hpp"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Request_patronymic
{
public:
  explicit Init_SummFullName_Request_patronymic(::tutorial_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SummFullName_Request patronymic(::tutorial_interfaces::srv::SummFullName_Request::_patronymic_type arg)
  {
    msg_.patronymic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_name
{
public:
  explicit Init_SummFullName_Request_name(::tutorial_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  Init_SummFullName_Request_patronymic name(::tutorial_interfaces::srv::SummFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SummFullName_Request_patronymic(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_surname
{
public:
  Init_SummFullName_Request_surname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SummFullName_Request_name surname(::tutorial_interfaces::srv::SummFullName_Request::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return Init_SummFullName_Request_name(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SummFullName_Request>()
{
  return tutorial_interfaces::srv::builder::Init_SummFullName_Request_surname();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Response_full_name
{
public:
  Init_SummFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::SummFullName_Response full_name(::tutorial_interfaces::srv::SummFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SummFullName_Response>()
{
  return tutorial_interfaces::srv::builder::Init_SummFullName_Response_full_name();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Event_response
{
public:
  explicit Init_SummFullName_Event_response(::tutorial_interfaces::srv::SummFullName_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SummFullName_Event response(::tutorial_interfaces::srv::SummFullName_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Event msg_;
};

class Init_SummFullName_Event_request
{
public:
  explicit Init_SummFullName_Event_request(::tutorial_interfaces::srv::SummFullName_Event & msg)
  : msg_(msg)
  {}
  Init_SummFullName_Event_response request(::tutorial_interfaces::srv::SummFullName_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SummFullName_Event_response(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Event msg_;
};

class Init_SummFullName_Event_info
{
public:
  Init_SummFullName_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SummFullName_Event_request info(::tutorial_interfaces::srv::SummFullName_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SummFullName_Event_request(msg_);
  }

private:
  ::tutorial_interfaces::srv::SummFullName_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SummFullName_Event>()
{
  return tutorial_interfaces::srv::builder::Init_SummFullName_Event_info();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
