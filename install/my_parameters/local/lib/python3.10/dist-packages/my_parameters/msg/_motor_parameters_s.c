// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_parameters:msg/MotorParameters.idl
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
#include "my_parameters/msg/detail/motor_parameters__struct.h"
#include "my_parameters/msg/detail/motor_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_parameters__msg__motor_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("my_parameters.msg._motor_parameters.MotorParameters", full_classname_dest, 51) == 0);
  }
  my_parameters__msg__MotorParameters * ros_message = _ros_message;
  {  // alpha_a_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_a_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_a_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_c_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_c_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_c_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_a_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_a_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_a_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_c_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_c_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_c_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_a_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_a_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_a_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_c_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_c_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_c_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_a_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_a_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_a_rl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_rl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_c_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_c_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_c_rl = (float)PyFloat_AS_DOUBLE(field);
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
  {  // pre_tight
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_tight");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_tight = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_parameters__msg__motor_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_parameters.msg._motor_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_parameters__msg__MotorParameters * ros_message = (my_parameters__msg__MotorParameters *)raw_ros_message;
  {  // alpha_a_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_a_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_a_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_b_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_b_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_b_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_c_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_c_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_c_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_a_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_a_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_a_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_b_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_b_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_b_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_c_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_c_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_c_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_a_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_a_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_a_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_b_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_b_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_b_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_c_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_c_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_c_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_a_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_a_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_a_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_b_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_b_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_b_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_c_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_c_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_c_rl", field);
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
  {  // pre_tight
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_tight ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_tight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
