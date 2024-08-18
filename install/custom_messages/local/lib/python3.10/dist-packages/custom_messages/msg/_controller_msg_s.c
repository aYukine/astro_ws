// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_messages:msg/ControllerMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_messages/msg/detail/controller_msg__struct.h"
#include "custom_messages/msg/detail/controller_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_messages__msg__controller_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_messages.msg._controller_msg.ControllerMsg", full_classname_dest, 49) == 0);
  }
  custom_messages__msg__ControllerMsg * ros_message = _ros_message;
  {  // button_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_sel
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_sel");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_sel = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_lb
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_lb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_lb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_lt
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_lt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_lt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_rb
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_rb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_rb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_rt
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_rt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_rt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_joystick_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_joystick_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_joystick_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_joystick_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_joystick_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_joystick_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_m1
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_m1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_m1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_m2
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_m2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_m2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_analog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_analog_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_analog_x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_analog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_analog_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_analog_y = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_analog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_analog_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_analog_x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_analog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_analog_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_analog_y = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_messages__msg__controller_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControllerMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_messages.msg._controller_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControllerMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_messages__msg__ControllerMsg * ros_message = (custom_messages__msg__ControllerMsg *)raw_ros_message;
  {  // button_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_sel
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_sel ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_sel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_lb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_lb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_lb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_lt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_lt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_lt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_rb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_rb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_rb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_rt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_rt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_rt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_joystick_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_joystick_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_joystick_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_joystick_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_joystick_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_joystick_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_m1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_m1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_m1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_m2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_m2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_m2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_analog_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_analog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_analog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_analog_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_analog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_analog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_analog_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_analog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_analog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_analog_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_analog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_analog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
