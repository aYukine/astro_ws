// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/controller_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_messages__msg__ControllerMsg__init(custom_messages__msg__ControllerMsg * msg)
{
  if (!msg) {
    return false;
  }
  // button_a
  // button_b
  // button_x
  // button_y
  // button_up
  // button_down
  // button_left
  // button_right
  // button_sel
  // button_sta
  // button_lb
  // button_lt
  // button_rb
  // button_rt
  // button_joystick_left
  // button_joystick_right
  // button_m1
  // button_m2
  // left_analog_x
  // left_analog_y
  // right_analog_x
  // right_analog_y
  return true;
}

void
custom_messages__msg__ControllerMsg__fini(custom_messages__msg__ControllerMsg * msg)
{
  if (!msg) {
    return;
  }
  // button_a
  // button_b
  // button_x
  // button_y
  // button_up
  // button_down
  // button_left
  // button_right
  // button_sel
  // button_sta
  // button_lb
  // button_lt
  // button_rb
  // button_rt
  // button_joystick_left
  // button_joystick_right
  // button_m1
  // button_m2
  // left_analog_x
  // left_analog_y
  // right_analog_x
  // right_analog_y
}

bool
custom_messages__msg__ControllerMsg__are_equal(const custom_messages__msg__ControllerMsg * lhs, const custom_messages__msg__ControllerMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // button_a
  if (lhs->button_a != rhs->button_a) {
    return false;
  }
  // button_b
  if (lhs->button_b != rhs->button_b) {
    return false;
  }
  // button_x
  if (lhs->button_x != rhs->button_x) {
    return false;
  }
  // button_y
  if (lhs->button_y != rhs->button_y) {
    return false;
  }
  // button_up
  if (lhs->button_up != rhs->button_up) {
    return false;
  }
  // button_down
  if (lhs->button_down != rhs->button_down) {
    return false;
  }
  // button_left
  if (lhs->button_left != rhs->button_left) {
    return false;
  }
  // button_right
  if (lhs->button_right != rhs->button_right) {
    return false;
  }
  // button_sel
  if (lhs->button_sel != rhs->button_sel) {
    return false;
  }
  // button_sta
  if (lhs->button_sta != rhs->button_sta) {
    return false;
  }
  // button_lb
  if (lhs->button_lb != rhs->button_lb) {
    return false;
  }
  // button_lt
  if (lhs->button_lt != rhs->button_lt) {
    return false;
  }
  // button_rb
  if (lhs->button_rb != rhs->button_rb) {
    return false;
  }
  // button_rt
  if (lhs->button_rt != rhs->button_rt) {
    return false;
  }
  // button_joystick_left
  if (lhs->button_joystick_left != rhs->button_joystick_left) {
    return false;
  }
  // button_joystick_right
  if (lhs->button_joystick_right != rhs->button_joystick_right) {
    return false;
  }
  // button_m1
  if (lhs->button_m1 != rhs->button_m1) {
    return false;
  }
  // button_m2
  if (lhs->button_m2 != rhs->button_m2) {
    return false;
  }
  // left_analog_x
  if (lhs->left_analog_x != rhs->left_analog_x) {
    return false;
  }
  // left_analog_y
  if (lhs->left_analog_y != rhs->left_analog_y) {
    return false;
  }
  // right_analog_x
  if (lhs->right_analog_x != rhs->right_analog_x) {
    return false;
  }
  // right_analog_y
  if (lhs->right_analog_y != rhs->right_analog_y) {
    return false;
  }
  return true;
}

bool
custom_messages__msg__ControllerMsg__copy(
  const custom_messages__msg__ControllerMsg * input,
  custom_messages__msg__ControllerMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // button_a
  output->button_a = input->button_a;
  // button_b
  output->button_b = input->button_b;
  // button_x
  output->button_x = input->button_x;
  // button_y
  output->button_y = input->button_y;
  // button_up
  output->button_up = input->button_up;
  // button_down
  output->button_down = input->button_down;
  // button_left
  output->button_left = input->button_left;
  // button_right
  output->button_right = input->button_right;
  // button_sel
  output->button_sel = input->button_sel;
  // button_sta
  output->button_sta = input->button_sta;
  // button_lb
  output->button_lb = input->button_lb;
  // button_lt
  output->button_lt = input->button_lt;
  // button_rb
  output->button_rb = input->button_rb;
  // button_rt
  output->button_rt = input->button_rt;
  // button_joystick_left
  output->button_joystick_left = input->button_joystick_left;
  // button_joystick_right
  output->button_joystick_right = input->button_joystick_right;
  // button_m1
  output->button_m1 = input->button_m1;
  // button_m2
  output->button_m2 = input->button_m2;
  // left_analog_x
  output->left_analog_x = input->left_analog_x;
  // left_analog_y
  output->left_analog_y = input->left_analog_y;
  // right_analog_x
  output->right_analog_x = input->right_analog_x;
  // right_analog_y
  output->right_analog_y = input->right_analog_y;
  return true;
}

custom_messages__msg__ControllerMsg *
custom_messages__msg__ControllerMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__ControllerMsg * msg = (custom_messages__msg__ControllerMsg *)allocator.allocate(sizeof(custom_messages__msg__ControllerMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__msg__ControllerMsg));
  bool success = custom_messages__msg__ControllerMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__msg__ControllerMsg__destroy(custom_messages__msg__ControllerMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__msg__ControllerMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__msg__ControllerMsg__Sequence__init(custom_messages__msg__ControllerMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__ControllerMsg * data = NULL;

  if (size) {
    data = (custom_messages__msg__ControllerMsg *)allocator.zero_allocate(size, sizeof(custom_messages__msg__ControllerMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__msg__ControllerMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__msg__ControllerMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_messages__msg__ControllerMsg__Sequence__fini(custom_messages__msg__ControllerMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_messages__msg__ControllerMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_messages__msg__ControllerMsg__Sequence *
custom_messages__msg__ControllerMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__ControllerMsg__Sequence * array = (custom_messages__msg__ControllerMsg__Sequence *)allocator.allocate(sizeof(custom_messages__msg__ControllerMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__msg__ControllerMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__msg__ControllerMsg__Sequence__destroy(custom_messages__msg__ControllerMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__msg__ControllerMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__msg__ControllerMsg__Sequence__are_equal(const custom_messages__msg__ControllerMsg__Sequence * lhs, const custom_messages__msg__ControllerMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__msg__ControllerMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__msg__ControllerMsg__Sequence__copy(
  const custom_messages__msg__ControllerMsg__Sequence * input,
  custom_messages__msg__ControllerMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__msg__ControllerMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__msg__ControllerMsg * data =
      (custom_messages__msg__ControllerMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__msg__ControllerMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__msg__ControllerMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__msg__ControllerMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
