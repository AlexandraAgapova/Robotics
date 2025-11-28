// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tutorial_interfaces/srv/summ_full_name.hpp"


#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SummFullName_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: surname
  {
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: patronymic
  {
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SummFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: surname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: patronymic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patronymic: ";
    rosidl_generator_traits::value_to_yaml(msg.patronymic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SummFullName_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::SummFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::SummFullName_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::SummFullName_Request>()
{
  return "tutorial_interfaces::srv::SummFullName_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::SummFullName_Request>()
{
  return "tutorial_interfaces/srv/SummFullName_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::SummFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::SummFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_interfaces::srv::SummFullName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SummFullName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_name
  {
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SummFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SummFullName_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::SummFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::SummFullName_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::SummFullName_Response>()
{
  return "tutorial_interfaces::srv::SummFullName_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::SummFullName_Response>()
{
  return "tutorial_interfaces/srv/SummFullName_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::SummFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::SummFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_interfaces::srv::SummFullName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SummFullName_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SummFullName_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SummFullName_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::SummFullName_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::SummFullName_Event & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::SummFullName_Event>()
{
  return "tutorial_interfaces::srv::SummFullName_Event";
}

template<>
inline const char * name<tutorial_interfaces::srv::SummFullName_Event>()
{
  return "tutorial_interfaces/srv/SummFullName_Event";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::SummFullName_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::SummFullName_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<tutorial_interfaces::srv::SummFullName_Request>::value && has_bounded_size<tutorial_interfaces::srv::SummFullName_Response>::value> {};

template<>
struct is_message<tutorial_interfaces::srv::SummFullName_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::SummFullName>()
{
  return "tutorial_interfaces::srv::SummFullName";
}

template<>
inline const char * name<tutorial_interfaces::srv::SummFullName>()
{
  return "tutorial_interfaces/srv/SummFullName";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::SummFullName>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::SummFullName_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::SummFullName_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::SummFullName>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::SummFullName_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::SummFullName_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::SummFullName>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::SummFullName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::SummFullName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__TRAITS_HPP_
