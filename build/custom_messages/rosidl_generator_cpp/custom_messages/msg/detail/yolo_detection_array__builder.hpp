// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/yolo_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_YoloDetectionArray_detections
{
public:
  Init_YoloDetectionArray_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::YoloDetectionArray detections(::custom_messages::msg::YoloDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::YoloDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::YoloDetectionArray>()
{
  return custom_messages::msg::builder::Init_YoloDetectionArray_detections();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_
