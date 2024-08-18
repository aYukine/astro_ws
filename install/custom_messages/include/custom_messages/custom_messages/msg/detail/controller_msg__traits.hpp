// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/controller_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: button_a
  {
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << ", ";
  }

  // member: button_b
  {
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << ", ";
  }

  // member: button_x
  {
    out << "button_x: ";
    rosidl_generator_traits::value_to_yaml(msg.button_x, out);
    out << ", ";
  }

  // member: button_y
  {
    out << "button_y: ";
    rosidl_generator_traits::value_to_yaml(msg.button_y, out);
    out << ", ";
  }

  // member: button_up
  {
    out << "button_up: ";
    rosidl_generator_traits::value_to_yaml(msg.button_up, out);
    out << ", ";
  }

  // member: button_down
  {
    out << "button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.button_down, out);
    out << ", ";
  }

  // member: button_left
  {
    out << "button_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_left, out);
    out << ", ";
  }

  // member: button_right
  {
    out << "button_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_right, out);
    out << ", ";
  }

  // member: button_sel
  {
    out << "button_sel: ";
    rosidl_generator_traits::value_to_yaml(msg.button_sel, out);
    out << ", ";
  }

  // member: button_sta
  {
    out << "button_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.button_sta, out);
    out << ", ";
  }

  // member: button_lb
  {
    out << "button_lb: ";
    rosidl_generator_traits::value_to_yaml(msg.button_lb, out);
    out << ", ";
  }

  // member: button_lt
  {
    out << "button_lt: ";
    rosidl_generator_traits::value_to_yaml(msg.button_lt, out);
    out << ", ";
  }

  // member: button_rb
  {
    out << "button_rb: ";
    rosidl_generator_traits::value_to_yaml(msg.button_rb, out);
    out << ", ";
  }

  // member: button_rt
  {
    out << "button_rt: ";
    rosidl_generator_traits::value_to_yaml(msg.button_rt, out);
    out << ", ";
  }

  // member: button_joystick_left
  {
    out << "button_joystick_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_joystick_left, out);
    out << ", ";
  }

  // member: button_joystick_right
  {
    out << "button_joystick_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_joystick_right, out);
    out << ", ";
  }

  // member: button_m1
  {
    out << "button_m1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_m1, out);
    out << ", ";
  }

  // member: button_m2
  {
    out << "button_m2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_m2, out);
    out << ", ";
  }

  // member: left_analog_x
  {
    out << "left_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_x, out);
    out << ", ";
  }

  // member: left_analog_y
  {
    out << "left_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_y, out);
    out << ", ";
  }

  // member: right_analog_x
  {
    out << "right_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_x, out);
    out << ", ";
  }

  // member: right_analog_y
  {
    out << "right_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: button_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << "\n";
  }

  // member: button_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << "\n";
  }

  // member: button_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_x: ";
    rosidl_generator_traits::value_to_yaml(msg.button_x, out);
    out << "\n";
  }

  // member: button_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_y: ";
    rosidl_generator_traits::value_to_yaml(msg.button_y, out);
    out << "\n";
  }

  // member: button_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_up: ";
    rosidl_generator_traits::value_to_yaml(msg.button_up, out);
    out << "\n";
  }

  // member: button_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.button_down, out);
    out << "\n";
  }

  // member: button_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_left, out);
    out << "\n";
  }

  // member: button_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_right, out);
    out << "\n";
  }

  // member: button_sel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_sel: ";
    rosidl_generator_traits::value_to_yaml(msg.button_sel, out);
    out << "\n";
  }

  // member: button_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.button_sta, out);
    out << "\n";
  }

  // member: button_lb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_lb: ";
    rosidl_generator_traits::value_to_yaml(msg.button_lb, out);
    out << "\n";
  }

  // member: button_lt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_lt: ";
    rosidl_generator_traits::value_to_yaml(msg.button_lt, out);
    out << "\n";
  }

  // member: button_rb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_rb: ";
    rosidl_generator_traits::value_to_yaml(msg.button_rb, out);
    out << "\n";
  }

  // member: button_rt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_rt: ";
    rosidl_generator_traits::value_to_yaml(msg.button_rt, out);
    out << "\n";
  }

  // member: button_joystick_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_joystick_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_joystick_left, out);
    out << "\n";
  }

  // member: button_joystick_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_joystick_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_joystick_right, out);
    out << "\n";
  }

  // member: button_m1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_m1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_m1, out);
    out << "\n";
  }

  // member: button_m2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_m2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_m2, out);
    out << "\n";
  }

  // member: left_analog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_x, out);
    out << "\n";
  }

  // member: left_analog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_y, out);
    out << "\n";
  }

  // member: right_analog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_x, out);
    out << "\n";
  }

  // member: right_analog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerMsg & msg, bool use_flow_style = false)
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
  const custom_messages::msg::ControllerMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::ControllerMsg & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::ControllerMsg>()
{
  return "custom_messages::msg::ControllerMsg";
}

template<>
inline const char * name<custom_messages::msg::ControllerMsg>()
{
  return "custom_messages/msg/ControllerMsg";
}

template<>
struct has_fixed_size<custom_messages::msg::ControllerMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_messages::msg::ControllerMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_messages::msg::ControllerMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__TRAITS_HPP_
