// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
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
#include "my_parameters/msg/detail/obstacle_proximity_log__struct.h"
#include "my_parameters/msg/detail/obstacle_proximity_log__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool my_parameters__msg__obstacle_proximity_log__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("my_parameters.msg._obstacle_proximity_log.ObstacleProximityLog", full_classname_dest, 62) == 0);
  }
  my_parameters__msg__ObstacleProximityLog * ros_message = _ros_message;
  {  // distance_zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_zone = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // goal_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_parameters__msg__obstacle_proximity_log__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleProximityLog */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_parameters.msg._obstacle_proximity_log");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleProximityLog");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_parameters__msg__ObstacleProximityLog * ros_message = (my_parameters__msg__ObstacleProximityLog *)raw_ros_message;
  {  // distance_zone
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->distance_zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->goal_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
