// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/controller_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_messages/msg/detail/controller_msg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
cdr_serialize(
  const custom_messages::msg::ControllerMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: button_a
  cdr << (ros_message.button_a ? true : false);
  // Member: button_b
  cdr << (ros_message.button_b ? true : false);
  // Member: button_x
  cdr << (ros_message.button_x ? true : false);
  // Member: button_y
  cdr << (ros_message.button_y ? true : false);
  // Member: button_up
  cdr << (ros_message.button_up ? true : false);
  // Member: button_down
  cdr << (ros_message.button_down ? true : false);
  // Member: button_left
  cdr << (ros_message.button_left ? true : false);
  // Member: button_right
  cdr << (ros_message.button_right ? true : false);
  // Member: button_sel
  cdr << (ros_message.button_sel ? true : false);
  // Member: button_sta
  cdr << (ros_message.button_sta ? true : false);
  // Member: button_lb
  cdr << (ros_message.button_lb ? true : false);
  // Member: button_lt
  cdr << (ros_message.button_lt ? true : false);
  // Member: button_rb
  cdr << (ros_message.button_rb ? true : false);
  // Member: button_rt
  cdr << (ros_message.button_rt ? true : false);
  // Member: button_joystick_left
  cdr << (ros_message.button_joystick_left ? true : false);
  // Member: button_joystick_right
  cdr << (ros_message.button_joystick_right ? true : false);
  // Member: button_m1
  cdr << (ros_message.button_m1 ? true : false);
  // Member: button_m2
  cdr << (ros_message.button_m2 ? true : false);
  // Member: left_analog_x
  cdr << ros_message.left_analog_x;
  // Member: left_analog_y
  cdr << ros_message.left_analog_y;
  // Member: right_analog_x
  cdr << ros_message.right_analog_x;
  // Member: right_analog_y
  cdr << ros_message.right_analog_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_messages::msg::ControllerMsg & ros_message)
{
  // Member: button_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_a = tmp ? true : false;
  }

  // Member: button_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_b = tmp ? true : false;
  }

  // Member: button_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_x = tmp ? true : false;
  }

  // Member: button_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_y = tmp ? true : false;
  }

  // Member: button_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_up = tmp ? true : false;
  }

  // Member: button_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_down = tmp ? true : false;
  }

  // Member: button_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_left = tmp ? true : false;
  }

  // Member: button_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_right = tmp ? true : false;
  }

  // Member: button_sel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_sel = tmp ? true : false;
  }

  // Member: button_sta
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_sta = tmp ? true : false;
  }

  // Member: button_lb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_lb = tmp ? true : false;
  }

  // Member: button_lt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_lt = tmp ? true : false;
  }

  // Member: button_rb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_rb = tmp ? true : false;
  }

  // Member: button_rt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_rt = tmp ? true : false;
  }

  // Member: button_joystick_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_joystick_left = tmp ? true : false;
  }

  // Member: button_joystick_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_joystick_right = tmp ? true : false;
  }

  // Member: button_m1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_m1 = tmp ? true : false;
  }

  // Member: button_m2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_m2 = tmp ? true : false;
  }

  // Member: left_analog_x
  cdr >> ros_message.left_analog_x;

  // Member: left_analog_y
  cdr >> ros_message.left_analog_y;

  // Member: right_analog_x
  cdr >> ros_message.right_analog_x;

  // Member: right_analog_y
  cdr >> ros_message.right_analog_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
get_serialized_size(
  const custom_messages::msg::ControllerMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: button_a
  {
    size_t item_size = sizeof(ros_message.button_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_b
  {
    size_t item_size = sizeof(ros_message.button_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_x
  {
    size_t item_size = sizeof(ros_message.button_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_y
  {
    size_t item_size = sizeof(ros_message.button_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_up
  {
    size_t item_size = sizeof(ros_message.button_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_down
  {
    size_t item_size = sizeof(ros_message.button_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_left
  {
    size_t item_size = sizeof(ros_message.button_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_right
  {
    size_t item_size = sizeof(ros_message.button_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_sel
  {
    size_t item_size = sizeof(ros_message.button_sel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_sta
  {
    size_t item_size = sizeof(ros_message.button_sta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_lb
  {
    size_t item_size = sizeof(ros_message.button_lb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_lt
  {
    size_t item_size = sizeof(ros_message.button_lt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_rb
  {
    size_t item_size = sizeof(ros_message.button_rb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_rt
  {
    size_t item_size = sizeof(ros_message.button_rt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_joystick_left
  {
    size_t item_size = sizeof(ros_message.button_joystick_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_joystick_right
  {
    size_t item_size = sizeof(ros_message.button_joystick_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_m1
  {
    size_t item_size = sizeof(ros_message.button_m1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_m2
  {
    size_t item_size = sizeof(ros_message.button_m2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_analog_x
  {
    size_t item_size = sizeof(ros_message.left_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_analog_y
  {
    size_t item_size = sizeof(ros_message.left_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_analog_x
  {
    size_t item_size = sizeof(ros_message.right_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_analog_y
  {
    size_t item_size = sizeof(ros_message.right_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
max_serialized_size_ControllerMsg(
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


  // Member: button_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_sel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_sta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_lb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_lt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_rb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_rt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_joystick_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_joystick_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_m1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_m2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_analog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_analog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_messages::msg::ControllerMsg;
    is_plain =
      (
      offsetof(DataType, right_analog_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControllerMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_messages::msg::ControllerMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_messages::msg::ControllerMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_messages::msg::ControllerMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerMsg__callbacks = {
  "custom_messages::msg",
  "ControllerMsg",
  _ControllerMsg__cdr_serialize,
  _ControllerMsg__cdr_deserialize,
  _ControllerMsg__get_serialized_size,
  _ControllerMsg__max_serialized_size
};

static rosidl_message_type_support_t _ControllerMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_messages::msg::ControllerMsg>()
{
  return &custom_messages::msg::typesupport_fastrtps_cpp::_ControllerMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_messages, msg, ControllerMsg)() {
  return &custom_messages::msg::typesupport_fastrtps_cpp::_ControllerMsg__handle;
}

#ifdef __cplusplus
}
#endif
