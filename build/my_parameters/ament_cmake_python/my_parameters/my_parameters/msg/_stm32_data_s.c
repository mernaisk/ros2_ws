// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_parameters:msg/Stm32Data.idl
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
#include "my_parameters/msg/detail/stm32_data__struct.h"
#include "my_parameters/msg/detail/stm32_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_parameters__msg__stm32_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("my_parameters.msg._stm32_data.Stm32Data", full_classname_dest, 39) == 0);
  }
  my_parameters__msg__Stm32Data * ros_message = _ros_message;
  {  // motor1_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor1_fr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor2_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor2_fr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor3_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor3_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor3_fr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor1_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor1_fl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor2_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor2_fl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor3_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor3_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor3_fl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor1_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1_rr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor1_rr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor2_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2_rr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor2_rr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor3_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor3_rr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor3_rr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor1_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1_rl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor1_rl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor2_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2_rl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor2_rl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor3_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor3_rl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor3_rl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // move
    PyObject * field = PyObject_GetAttrString(_pymsg, "move");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->move = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_parameters__msg__stm32_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Stm32Data */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_parameters.msg._stm32_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Stm32Data");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_parameters__msg__Stm32Data * ros_message = (my_parameters__msg__Stm32Data *)raw_ros_message;
  {  // motor1_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor1_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor2_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor3_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor3_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor3_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor1_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor1_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor2_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor3_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor3_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor3_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor1_rr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor1_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2_rr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor2_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor3_rr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor3_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor3_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor1_rl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor1_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2_rl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor2_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor3_rl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor3_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor3_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->move ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
