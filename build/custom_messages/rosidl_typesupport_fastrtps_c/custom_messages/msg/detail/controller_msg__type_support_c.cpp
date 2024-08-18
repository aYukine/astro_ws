// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/controller_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_messages/msg/detail/controller_msg__struct.h"
#include "custom_messages/msg/detail/controller_msg__functions.h"
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


// forward declare type support functions


using _ControllerMsg__ros_msg_type = custom_messages__msg__ControllerMsg;

static bool _ControllerMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControllerMsg__ros_msg_type * ros_message = static_cast<const _ControllerMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: button_a
  {
    cdr << (ros_message->button_a ? true : false);
  }

  // Field name: button_b
  {
    cdr << (ros_message->button_b ? true : false);
  }

  // Field name: button_x
  {
    cdr << (ros_message->button_x ? true : false);
  }

  // Field name: button_y
  {
    cdr << (ros_message->button_y ? true : false);
  }

  // Field name: button_up
  {
    cdr << (ros_message->button_up ? true : false);
  }

  // Field name: button_down
  {
    cdr << (ros_message->button_down ? true : false);
  }

  // Field name: button_left
  {
    cdr << (ros_message->button_left ? true : false);
  }

  // Field name: button_right
  {
    cdr << (ros_message->button_right ? true : false);
  }

  // Field name: button_sel
  {
    cdr << (ros_message->button_sel ? true : false);
  }

  // Field name: button_sta
  {
    cdr << (ros_message->button_sta ? true : false);
  }

  // Field name: button_lb
  {
    cdr << (ros_message->button_lb ? true : false);
  }

  // Field name: button_lt
  {
    cdr << (ros_message->button_lt ? true : false);
  }

  // Field name: button_rb
  {
    cdr << (ros_message->button_rb ? true : false);
  }

  // Field name: button_rt
  {
    cdr << (ros_message->button_rt ? true : false);
  }

  // Field name: button_joystick_left
  {
    cdr << (ros_message->button_joystick_left ? true : false);
  }

  // Field name: button_joystick_right
  {
    cdr << (ros_message->button_joystick_right ? true : false);
  }

  // Field name: button_m1
  {
    cdr << (ros_message->button_m1 ? true : false);
  }

  // Field name: button_m2
  {
    cdr << (ros_message->button_m2 ? true : false);
  }

  // Field name: left_analog_x
  {
    cdr << ros_message->left_analog_x;
  }

  // Field name: left_analog_y
  {
    cdr << ros_message->left_analog_y;
  }

  // Field name: right_analog_x
  {
    cdr << ros_message->right_analog_x;
  }

  // Field name: right_analog_y
  {
    cdr << ros_message->right_analog_y;
  }

  return true;
}

static bool _ControllerMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControllerMsg__ros_msg_type * ros_message = static_cast<_ControllerMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: button_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_a = tmp ? true : false;
  }

  // Field name: button_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_b = tmp ? true : false;
  }

  // Field name: button_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_x = tmp ? true : false;
  }

  // Field name: button_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_y = tmp ? true : false;
  }

  // Field name: button_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_up = tmp ? true : false;
  }

  // Field name: button_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_down = tmp ? true : false;
  }

  // Field name: button_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_left = tmp ? true : false;
  }

  // Field name: button_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_right = tmp ? true : false;
  }

  // Field name: button_sel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_sel = tmp ? true : false;
  }

  // Field name: button_sta
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_sta = tmp ? true : false;
  }

  // Field name: button_lb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_lb = tmp ? true : false;
  }

  // Field name: button_lt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_lt = tmp ? true : false;
  }

  // Field name: button_rb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_rb = tmp ? true : false;
  }

  // Field name: button_rt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_rt = tmp ? true : false;
  }

  // Field name: button_joystick_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_joystick_left = tmp ? true : false;
  }

  // Field name: button_joystick_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_joystick_right = tmp ? true : false;
  }

  // Field name: button_m1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_m1 = tmp ? true : false;
  }

  // Field name: button_m2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_m2 = tmp ? true : false;
  }

  // Field name: left_analog_x
  {
    cdr >> ros_message->left_analog_x;
  }

  // Field name: left_analog_y
  {
    cdr >> ros_message->left_analog_y;
  }

  // Field name: right_analog_x
  {
    cdr >> ros_message->right_analog_x;
  }

  // Field name: right_analog_y
  {
    cdr >> ros_message->right_analog_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_messages
size_t get_serialized_size_custom_messages__msg__ControllerMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerMsg__ros_msg_type * ros_message = static_cast<const _ControllerMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name button_a
  {
    size_t item_size = sizeof(ros_message->button_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_b
  {
    size_t item_size = sizeof(ros_message->button_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_x
  {
    size_t item_size = sizeof(ros_message->button_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_y
  {
    size_t item_size = sizeof(ros_message->button_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_up
  {
    size_t item_size = sizeof(ros_message->button_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_down
  {
    size_t item_size = sizeof(ros_message->button_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_left
  {
    size_t item_size = sizeof(ros_message->button_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_right
  {
    size_t item_size = sizeof(ros_message->button_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_sel
  {
    size_t item_size = sizeof(ros_message->button_sel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_sta
  {
    size_t item_size = sizeof(ros_message->button_sta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_lb
  {
    size_t item_size = sizeof(ros_message->button_lb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_lt
  {
    size_t item_size = sizeof(ros_message->button_lt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_rb
  {
    size_t item_size = sizeof(ros_message->button_rb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_rt
  {
    size_t item_size = sizeof(ros_message->button_rt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_joystick_left
  {
    size_t item_size = sizeof(ros_message->button_joystick_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_joystick_right
  {
    size_t item_size = sizeof(ros_message->button_joystick_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_m1
  {
    size_t item_size = sizeof(ros_message->button_m1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_m2
  {
    size_t item_size = sizeof(ros_message->button_m2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_analog_x
  {
    size_t item_size = sizeof(ros_message->left_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_analog_y
  {
    size_t item_size = sizeof(ros_message->left_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_analog_x
  {
    size_t item_size = sizeof(ros_message->right_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_analog_y
  {
    size_t item_size = sizeof(ros_message->right_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControllerMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_messages__msg__ControllerMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_messages
size_t max_serialized_size_custom_messages__msg__ControllerMsg(
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

  // member: button_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_sel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_sta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_lb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_lt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_rb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_rt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_joystick_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_joystick_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_m1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_m2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_analog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_analog_y
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
    using DataType = custom_messages__msg__ControllerMsg;
    is_plain =
      (
      offsetof(DataType, right_analog_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControllerMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_messages__msg__ControllerMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerMsg = {
  "custom_messages::msg",
  "ControllerMsg",
  _ControllerMsg__cdr_serialize,
  _ControllerMsg__cdr_deserialize,
  _ControllerMsg__get_serialized_size,
  _ControllerMsg__max_serialized_size
};

static rosidl_message_type_support_t _ControllerMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_messages, msg, ControllerMsg)() {
  return &_ControllerMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
