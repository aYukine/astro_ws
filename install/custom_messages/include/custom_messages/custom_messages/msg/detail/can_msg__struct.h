// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/CanMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CanMsg in the package custom_messages.
typedef struct custom_messages__msg__CanMsg
{
  uint16_t can_id;
  uint8_t data[8];
} custom_messages__msg__CanMsg;

// Struct for a sequence of custom_messages__msg__CanMsg.
typedef struct custom_messages__msg__CanMsg__Sequence
{
  custom_messages__msg__CanMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__CanMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__STRUCT_H_
