// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControllerMsg in the package custom_messages.
typedef struct custom_messages__msg__ControllerMsg
{
  bool button_a;
  bool button_b;
  bool button_x;
  bool button_y;
  bool button_up;
  bool button_down;
  bool button_left;
  bool button_right;
  bool button_sel;
  bool button_sta;
  bool button_lb;
  bool button_lt;
  bool button_rb;
  bool button_rt;
  bool button_joystick_left;
  bool button_joystick_right;
  bool button_m1;
  bool button_m2;
  uint8_t left_analog_x;
  uint8_t left_analog_y;
  uint8_t right_analog_x;
  uint8_t right_analog_y;
} custom_messages__msg__ControllerMsg;

// Struct for a sequence of custom_messages__msg__ControllerMsg.
typedef struct custom_messages__msg__ControllerMsg__Sequence
{
  custom_messages__msg__ControllerMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__ControllerMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_H_
