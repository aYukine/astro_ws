// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/CanMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/can_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CanMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanMsg & msg, bool use_flow_style = false)
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

}  // namespace custom_messages

namespace rosidl_generator_traits
{

[[deprecated("use custom_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messages::msg::CanMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::CanMsg & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::CanMsg>()
{
  return "custom_messages::msg::CanMsg";
}

template<>
inline const char * name<custom_messages::msg::CanMsg>()
{
  return "custom_messages/msg/CanMsg";
}

template<>
struct has_fixed_size<custom_messages::msg::CanMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_messages::msg::CanMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_messages::msg::CanMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__TRAITS_HPP_
