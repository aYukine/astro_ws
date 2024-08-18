// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__ControllerMsg __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__ControllerMsg __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerMsg_
{
  using Type = ControllerMsg_<ContainerAllocator>;

  explicit ControllerMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button_a = false;
      this->button_b = false;
      this->button_x = false;
      this->button_y = false;
      this->button_up = false;
      this->button_down = false;
      this->button_left = false;
      this->button_right = false;
      this->button_sel = false;
      this->button_sta = false;
      this->button_lb = false;
      this->button_lt = false;
      this->button_rb = false;
      this->button_rt = false;
      this->button_joystick_left = false;
      this->button_joystick_right = false;
      this->button_m1 = false;
      this->button_m2 = false;
      this->left_analog_x = 0;
      this->left_analog_y = 0;
      this->right_analog_x = 0;
      this->right_analog_y = 0;
    }
  }

  explicit ControllerMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button_a = false;
      this->button_b = false;
      this->button_x = false;
      this->button_y = false;
      this->button_up = false;
      this->button_down = false;
      this->button_left = false;
      this->button_right = false;
      this->button_sel = false;
      this->button_sta = false;
      this->button_lb = false;
      this->button_lt = false;
      this->button_rb = false;
      this->button_rt = false;
      this->button_joystick_left = false;
      this->button_joystick_right = false;
      this->button_m1 = false;
      this->button_m2 = false;
      this->left_analog_x = 0;
      this->left_analog_y = 0;
      this->right_analog_x = 0;
      this->right_analog_y = 0;
    }
  }

  // field types and members
  using _button_a_type =
    bool;
  _button_a_type button_a;
  using _button_b_type =
    bool;
  _button_b_type button_b;
  using _button_x_type =
    bool;
  _button_x_type button_x;
  using _button_y_type =
    bool;
  _button_y_type button_y;
  using _button_up_type =
    bool;
  _button_up_type button_up;
  using _button_down_type =
    bool;
  _button_down_type button_down;
  using _button_left_type =
    bool;
  _button_left_type button_left;
  using _button_right_type =
    bool;
  _button_right_type button_right;
  using _button_sel_type =
    bool;
  _button_sel_type button_sel;
  using _button_sta_type =
    bool;
  _button_sta_type button_sta;
  using _button_lb_type =
    bool;
  _button_lb_type button_lb;
  using _button_lt_type =
    bool;
  _button_lt_type button_lt;
  using _button_rb_type =
    bool;
  _button_rb_type button_rb;
  using _button_rt_type =
    bool;
  _button_rt_type button_rt;
  using _button_joystick_left_type =
    bool;
  _button_joystick_left_type button_joystick_left;
  using _button_joystick_right_type =
    bool;
  _button_joystick_right_type button_joystick_right;
  using _button_m1_type =
    bool;
  _button_m1_type button_m1;
  using _button_m2_type =
    bool;
  _button_m2_type button_m2;
  using _left_analog_x_type =
    uint8_t;
  _left_analog_x_type left_analog_x;
  using _left_analog_y_type =
    uint8_t;
  _left_analog_y_type left_analog_y;
  using _right_analog_x_type =
    uint8_t;
  _right_analog_x_type right_analog_x;
  using _right_analog_y_type =
    uint8_t;
  _right_analog_y_type right_analog_y;

  // setters for named parameter idiom
  Type & set__button_a(
    const bool & _arg)
  {
    this->button_a = _arg;
    return *this;
  }
  Type & set__button_b(
    const bool & _arg)
  {
    this->button_b = _arg;
    return *this;
  }
  Type & set__button_x(
    const bool & _arg)
  {
    this->button_x = _arg;
    return *this;
  }
  Type & set__button_y(
    const bool & _arg)
  {
    this->button_y = _arg;
    return *this;
  }
  Type & set__button_up(
    const bool & _arg)
  {
    this->button_up = _arg;
    return *this;
  }
  Type & set__button_down(
    const bool & _arg)
  {
    this->button_down = _arg;
    return *this;
  }
  Type & set__button_left(
    const bool & _arg)
  {
    this->button_left = _arg;
    return *this;
  }
  Type & set__button_right(
    const bool & _arg)
  {
    this->button_right = _arg;
    return *this;
  }
  Type & set__button_sel(
    const bool & _arg)
  {
    this->button_sel = _arg;
    return *this;
  }
  Type & set__button_sta(
    const bool & _arg)
  {
    this->button_sta = _arg;
    return *this;
  }
  Type & set__button_lb(
    const bool & _arg)
  {
    this->button_lb = _arg;
    return *this;
  }
  Type & set__button_lt(
    const bool & _arg)
  {
    this->button_lt = _arg;
    return *this;
  }
  Type & set__button_rb(
    const bool & _arg)
  {
    this->button_rb = _arg;
    return *this;
  }
  Type & set__button_rt(
    const bool & _arg)
  {
    this->button_rt = _arg;
    return *this;
  }
  Type & set__button_joystick_left(
    const bool & _arg)
  {
    this->button_joystick_left = _arg;
    return *this;
  }
  Type & set__button_joystick_right(
    const bool & _arg)
  {
    this->button_joystick_right = _arg;
    return *this;
  }
  Type & set__button_m1(
    const bool & _arg)
  {
    this->button_m1 = _arg;
    return *this;
  }
  Type & set__button_m2(
    const bool & _arg)
  {
    this->button_m2 = _arg;
    return *this;
  }
  Type & set__left_analog_x(
    const uint8_t & _arg)
  {
    this->left_analog_x = _arg;
    return *this;
  }
  Type & set__left_analog_y(
    const uint8_t & _arg)
  {
    this->left_analog_y = _arg;
    return *this;
  }
  Type & set__right_analog_x(
    const uint8_t & _arg)
  {
    this->right_analog_x = _arg;
    return *this;
  }
  Type & set__right_analog_y(
    const uint8_t & _arg)
  {
    this->right_analog_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::ControllerMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::ControllerMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::ControllerMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::ControllerMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__ControllerMsg
    std::shared_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__ControllerMsg
    std::shared_ptr<custom_messages::msg::ControllerMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerMsg_ & other) const
  {
    if (this->button_a != other.button_a) {
      return false;
    }
    if (this->button_b != other.button_b) {
      return false;
    }
    if (this->button_x != other.button_x) {
      return false;
    }
    if (this->button_y != other.button_y) {
      return false;
    }
    if (this->button_up != other.button_up) {
      return false;
    }
    if (this->button_down != other.button_down) {
      return false;
    }
    if (this->button_left != other.button_left) {
      return false;
    }
    if (this->button_right != other.button_right) {
      return false;
    }
    if (this->button_sel != other.button_sel) {
      return false;
    }
    if (this->button_sta != other.button_sta) {
      return false;
    }
    if (this->button_lb != other.button_lb) {
      return false;
    }
    if (this->button_lt != other.button_lt) {
      return false;
    }
    if (this->button_rb != other.button_rb) {
      return false;
    }
    if (this->button_rt != other.button_rt) {
      return false;
    }
    if (this->button_joystick_left != other.button_joystick_left) {
      return false;
    }
    if (this->button_joystick_right != other.button_joystick_right) {
      return false;
    }
    if (this->button_m1 != other.button_m1) {
      return false;
    }
    if (this->button_m2 != other.button_m2) {
      return false;
    }
    if (this->left_analog_x != other.left_analog_x) {
      return false;
    }
    if (this->left_analog_y != other.left_analog_y) {
      return false;
    }
    if (this->right_analog_x != other.right_analog_x) {
      return false;
    }
    if (this->right_analog_y != other.right_analog_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerMsg_

// alias to use template instance with default allocator
using ControllerMsg =
  custom_messages::msg::ControllerMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CONTROLLER_MSG__STRUCT_HPP_
