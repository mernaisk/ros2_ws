// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_parameters:msg/JoystickParameters.idl
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
#include "my_parameters/msg/detail/joystick_parameters__struct.h"
#include "my_parameters/msg/detail/joystick_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_parameters__msg__joystick_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("my_parameters.msg._joystick_parameters.JoystickParameters", full_classname_dest, 57) == 0);
  }
  my_parameters__msg__JoystickParameters * ros_message = _ros_message;
  {  // turn_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_command");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_command = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_command");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_command = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_direction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_parameters__msg__joystick_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JoystickParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_parameters.msg._joystick_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JoystickParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_parameters__msg__JoystickParameters * ros_message = (my_parameters__msg__JoystickParameters *)raw_ros_message;
  {  // turn_command
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_command ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_command
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_command ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
