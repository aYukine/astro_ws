// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/controller_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_ControllerMsg_right_analog_y
{
public:
  explicit Init_ControllerMsg_right_analog_y(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::ControllerMsg right_analog_y(::custom_messages::msg::ControllerMsg::_right_analog_y_type arg)
  {
    msg_.right_analog_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_right_analog_x
{
public:
  explicit Init_ControllerMsg_right_analog_x(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_right_analog_y right_analog_x(::custom_messages::msg::ControllerMsg::_right_analog_x_type arg)
  {
    msg_.right_analog_x = std::move(arg);
    return Init_ControllerMsg_right_analog_y(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_left_analog_y
{
public:
  explicit Init_ControllerMsg_left_analog_y(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_right_analog_x left_analog_y(::custom_messages::msg::ControllerMsg::_left_analog_y_type arg)
  {
    msg_.left_analog_y = std::move(arg);
    return Init_ControllerMsg_right_analog_x(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_left_analog_x
{
public:
  explicit Init_ControllerMsg_left_analog_x(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_left_analog_y left_analog_x(::custom_messages::msg::ControllerMsg::_left_analog_x_type arg)
  {
    msg_.left_analog_x = std::move(arg);
    return Init_ControllerMsg_left_analog_y(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_m2
{
public:
  explicit Init_ControllerMsg_button_m2(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_left_analog_x button_m2(::custom_messages::msg::ControllerMsg::_button_m2_type arg)
  {
    msg_.button_m2 = std::move(arg);
    return Init_ControllerMsg_left_analog_x(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_m1
{
public:
  explicit Init_ControllerMsg_button_m1(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_m2 button_m1(::custom_messages::msg::ControllerMsg::_button_m1_type arg)
  {
    msg_.button_m1 = std::move(arg);
    return Init_ControllerMsg_button_m2(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_joystick_right
{
public:
  explicit Init_ControllerMsg_button_joystick_right(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_m1 button_joystick_right(::custom_messages::msg::ControllerMsg::_button_joystick_right_type arg)
  {
    msg_.button_joystick_right = std::move(arg);
    return Init_ControllerMsg_button_m1(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_joystick_left
{
public:
  explicit Init_ControllerMsg_button_joystick_left(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_joystick_right button_joystick_left(::custom_messages::msg::ControllerMsg::_button_joystick_left_type arg)
  {
    msg_.button_joystick_left = std::move(arg);
    return Init_ControllerMsg_button_joystick_right(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_rt
{
public:
  explicit Init_ControllerMsg_button_rt(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_joystick_left button_rt(::custom_messages::msg::ControllerMsg::_button_rt_type arg)
  {
    msg_.button_rt = std::move(arg);
    return Init_ControllerMsg_button_joystick_left(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_rb
{
public:
  explicit Init_ControllerMsg_button_rb(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_rt button_rb(::custom_messages::msg::ControllerMsg::_button_rb_type arg)
  {
    msg_.button_rb = std::move(arg);
    return Init_ControllerMsg_button_rt(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_lt
{
public:
  explicit Init_ControllerMsg_button_lt(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_rb button_lt(::custom_messages::msg::ControllerMsg::_button_lt_type arg)
  {
    msg_.button_lt = std::move(arg);
    return Init_ControllerMsg_button_rb(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_lb
{
public:
  explicit Init_ControllerMsg_button_lb(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_lt button_lb(::custom_messages::msg::ControllerMsg::_button_lb_type arg)
  {
    msg_.button_lb = std::move(arg);
    return Init_ControllerMsg_button_lt(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_sta
{
public:
  explicit Init_ControllerMsg_button_sta(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_lb button_sta(::custom_messages::msg::ControllerMsg::_button_sta_type arg)
  {
    msg_.button_sta = std::move(arg);
    return Init_ControllerMsg_button_lb(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_sel
{
public:
  explicit Init_ControllerMsg_button_sel(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_sta button_sel(::custom_messages::msg::ControllerMsg::_button_sel_type arg)
  {
    msg_.button_sel = std::move(arg);
    return Init_ControllerMsg_button_sta(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_right
{
public:
  explicit Init_ControllerMsg_button_right(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_sel button_right(::custom_messages::msg::ControllerMsg::_button_right_type arg)
  {
    msg_.button_right = std::move(arg);
    return Init_ControllerMsg_button_sel(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_left
{
public:
  explicit Init_ControllerMsg_button_left(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_right button_left(::custom_messages::msg::ControllerMsg::_button_left_type arg)
  {
    msg_.button_left = std::move(arg);
    return Init_ControllerMsg_button_right(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_down
{
public:
  explicit Init_ControllerMsg_button_down(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_left button_down(::custom_messages::msg::ControllerMsg::_button_down_type arg)
  {
    msg_.button_down = std::move(arg);
    return Init_ControllerMsg_button_left(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_up
{
public:
  explicit Init_ControllerMsg_button_up(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_down button_up(::custom_messages::msg::ControllerMsg::_button_up_type arg)
  {
    msg_.button_up = std::move(arg);
    return Init_ControllerMsg_button_down(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_y
{
public:
  explicit Init_ControllerMsg_button_y(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_up button_y(::custom_messages::msg::ControllerMsg::_button_y_type arg)
  {
    msg_.button_y = std::move(arg);
    return Init_ControllerMsg_button_up(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_x
{
public:
  explicit Init_ControllerMsg_button_x(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_y button_x(::custom_messages::msg::ControllerMsg::_button_x_type arg)
  {
    msg_.button_x = std::move(arg);
    return Init_ControllerMsg_button_y(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_b
{
public:
  explicit Init_ControllerMsg_button_b(::custom_messages::msg::ControllerMsg & msg)
  : msg_(msg)
  {}
  Init_ControllerMsg_button_x button_b(::custom_messages::msg::ControllerMsg::_button_b_type arg)
  {
    msg_.button_b = std::move(arg);
    return Init_ControllerMsg_button_x(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

class Init_ControllerMsg_button_a
{
public:
  Init_ControllerMsg_button_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerMsg_button_b button_a(::custom_messages::msg::ControllerMsg::_button_a_type arg)
  {
    msg_.button_a = std::move(arg);
    return Init_ControllerMsg_button_b(msg_);
  }

private:
  ::custom_messages::msg::ControllerMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::ControllerMsg>()
{
  return custom_messages::msg::builder::Init_ControllerMsg_button_a();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__BUILDER_HPP_
