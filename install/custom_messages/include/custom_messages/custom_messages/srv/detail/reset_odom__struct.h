// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:srv/ResetOdom.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__STRUCT_H_
#define CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetOdom in the package custom_messages.
typedef struct custom_messages__srv__ResetOdom_Request
{
  uint8_t structure_needs_at_least_one_member;
} custom_messages__srv__ResetOdom_Request;

// Struct for a sequence of custom_messages__srv__ResetOdom_Request.
typedef struct custom_messages__srv__ResetOdom_Request__Sequence
{
  custom_messages__srv__ResetOdom_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__ResetOdom_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetOdom in the package custom_messages.
typedef struct custom_messages__srv__ResetOdom_Response
{
  bool success;
} custom_messages__srv__ResetOdom_Response;

// Struct for a sequence of custom_messages__srv__ResetOdom_Response.
typedef struct custom_messages__srv__ResetOdom_Response__Sequence
{
  custom_messages__srv__ResetOdom_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__srv__ResetOdom_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__STRUCT_H_
