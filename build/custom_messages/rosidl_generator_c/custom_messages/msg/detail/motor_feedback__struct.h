// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorFeedback in the package custom_messages.
typedef struct custom_messages__msg__MotorFeedback
{
  uint16_t motor_id;
  float speed;
  float position;
} custom_messages__msg__MotorFeedback;

// Struct for a sequence of custom_messages__msg__MotorFeedback.
typedef struct custom_messages__msg__MotorFeedback__Sequence
{
  custom_messages__msg__MotorFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__MotorFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
