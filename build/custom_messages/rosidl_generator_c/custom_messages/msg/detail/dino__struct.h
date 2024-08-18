// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Dino.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__DINO__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__DINO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Dino in the package custom_messages.
typedef struct custom_messages__msg__Dino
{
  rosidl_runtime_c__String name;
  uint8_t age;
  float weight;
} custom_messages__msg__Dino;

// Struct for a sequence of custom_messages__msg__Dino.
typedef struct custom_messages__msg__Dino__Sequence
{
  custom_messages__msg__Dino * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Dino__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__DINO__STRUCT_H_
