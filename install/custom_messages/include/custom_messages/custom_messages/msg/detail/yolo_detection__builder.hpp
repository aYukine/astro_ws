// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_YoloDetection_distance
{
public:
  explicit Init_YoloDetection_distance(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::YoloDetection distance(::custom_messages::msg::YoloDetection::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_confidence
{
public:
  explicit Init_YoloDetection_confidence(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_distance confidence(::custom_messages::msg::YoloDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_YoloDetection_distance(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_height
{
public:
  explicit Init_YoloDetection_height(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_confidence height(::custom_messages::msg::YoloDetection::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_YoloDetection_confidence(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_width
{
public:
  explicit Init_YoloDetection_width(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_height width(::custom_messages::msg::YoloDetection::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_YoloDetection_height(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_y
{
public:
  explicit Init_YoloDetection_y(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_width y(::custom_messages::msg::YoloDetection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloDetection_width(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_x
{
public:
  explicit Init_YoloDetection_x(::custom_messages::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y x(::custom_messages::msg::YoloDetection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloDetection_y(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

class Init_YoloDetection_class_id
{
public:
  Init_YoloDetection_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetection_x class_id(::custom_messages::msg::YoloDetection::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_YoloDetection_x(msg_);
  }

private:
  ::custom_messages::msg::YoloDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::YoloDetection>()
{
  return custom_messages::msg::builder::Init_YoloDetection_class_id();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
