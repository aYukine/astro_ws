// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "custom_messages/msg/detail/yolo_detection__struct.h"

/// Struct defined in msg/YoloDetectionArray in the package custom_messages.
/**
  * YoloDetectionsArray.msg
 */
typedef struct custom_messages__msg__YoloDetectionArray
{
  /// An array of detections
  custom_messages__msg__YoloDetection__Sequence detections;
} custom_messages__msg__YoloDetectionArray;

// Struct for a sequence of custom_messages__msg__YoloDetectionArray.
typedef struct custom_messages__msg__YoloDetectionArray__Sequence
{
  custom_messages__msg__YoloDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__YoloDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_
