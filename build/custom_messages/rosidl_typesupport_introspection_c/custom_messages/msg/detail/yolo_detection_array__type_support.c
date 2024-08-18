// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_messages:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_messages/msg/detail/yolo_detection_array__rosidl_typesupport_introspection_c.h"
#include "custom_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_messages/msg/detail/yolo_detection_array__functions.h"
#include "custom_messages/msg/detail/yolo_detection_array__struct.h"


// Include directives for member types
// Member `detections`
#include "custom_messages/msg/yolo_detection.h"
// Member `detections`
#include "custom_messages/msg/detail/yolo_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_messages__msg__YoloDetectionArray__init(message_memory);
}

void custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_fini_function(void * message_memory)
{
  custom_messages__msg__YoloDetectionArray__fini(message_memory);
}

size_t custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__size_function__YoloDetectionArray__detections(
  const void * untyped_member)
{
  const custom_messages__msg__YoloDetection__Sequence * member =
    (const custom_messages__msg__YoloDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_const_function__YoloDetectionArray__detections(
  const void * untyped_member, size_t index)
{
  const custom_messages__msg__YoloDetection__Sequence * member =
    (const custom_messages__msg__YoloDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_function__YoloDetectionArray__detections(
  void * untyped_member, size_t index)
{
  custom_messages__msg__YoloDetection__Sequence * member =
    (custom_messages__msg__YoloDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__fetch_function__YoloDetectionArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_messages__msg__YoloDetection * item =
    ((const custom_messages__msg__YoloDetection *)
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_const_function__YoloDetectionArray__detections(untyped_member, index));
  custom_messages__msg__YoloDetection * value =
    (custom_messages__msg__YoloDetection *)(untyped_value);
  *value = *item;
}

void custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__assign_function__YoloDetectionArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_messages__msg__YoloDetection * item =
    ((custom_messages__msg__YoloDetection *)
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_function__YoloDetectionArray__detections(untyped_member, index));
  const custom_messages__msg__YoloDetection * value =
    (const custom_messages__msg__YoloDetection *)(untyped_value);
  *item = *value;
}

bool custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__resize_function__YoloDetectionArray__detections(
  void * untyped_member, size_t size)
{
  custom_messages__msg__YoloDetection__Sequence * member =
    (custom_messages__msg__YoloDetection__Sequence *)(untyped_member);
  custom_messages__msg__YoloDetection__Sequence__fini(member);
  return custom_messages__msg__YoloDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__YoloDetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__size_function__YoloDetectionArray__detections,  // size() function pointer
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_const_function__YoloDetectionArray__detections,  // get_const(index) function pointer
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__get_function__YoloDetectionArray__detections,  // get(index) function pointer
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__fetch_function__YoloDetectionArray__detections,  // fetch(index, &value) function pointer
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__assign_function__YoloDetectionArray__detections,  // assign(index, value) function pointer
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__resize_function__YoloDetectionArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_members = {
  "custom_messages__msg",  // message namespace
  "YoloDetectionArray",  // message name
  1,  // number of fields
  sizeof(custom_messages__msg__YoloDetectionArray),
  custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_member_array,  // message members
  custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_type_support_handle = {
  0,
  &custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, YoloDetectionArray)() {
  custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, YoloDetection)();
  if (!custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_type_support_handle.typesupport_identifier) {
    custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_messages__msg__YoloDetectionArray__rosidl_typesupport_introspection_c__YoloDetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
