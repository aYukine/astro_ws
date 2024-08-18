// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/YoloDetection in the package custom_messages.
/**
  * YoloV8Detection.msg
 */
typedef struct custom_messages__msg__YoloDetection
{
  /// The ID of the detected class
  int16_t class_id;
  /// The bounding box of the detected object (top-left x, top-left y, width, height)
  float x;
  float y;
  float width;
  float height;
  /// The confidence score of the detection
  float confidence;
  /// distance of the object
  float distance;
} custom_messages__msg__YoloDetection;

// Struct for a sequence of custom_messages__msg__YoloDetection.
typedef struct custom_messages__msg__YoloDetection__Sequence
{
  custom_messages__msg__YoloDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__YoloDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
