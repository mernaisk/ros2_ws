// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_parameters:msg/DebugParameter.idl
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
#include "my_parameters/msg/detail/debug_parameter__struct.h"
#include "my_parameters/msg/detail/debug_parameter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_parameters__msg__debug_parameter__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("my_parameters.msg._debug_parameter.DebugParameter", full_classname_dest, 49) == 0);
  }
  my_parameters__msg__DebugParameter * ros_message = _ros_message;
  {  // alpha_r_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_r_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_r_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_l_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_l_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_l_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_r_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_r_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_r_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_l_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_l_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_l_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_r_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_r_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_r_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_l_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_l_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_l_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_r_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_r_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_r_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_b_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_b_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_b_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_l_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_l_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_l_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_parameters__msg__debug_parameter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DebugParameter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_parameters.msg._debug_parameter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DebugParameter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_parameters__msg__DebugParameter * ros_message = (my_parameters__msg__DebugParameter *)raw_ros_message;
  {  // alpha_r_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_r_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_r_fr", field);
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
  {  // z_l_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_l_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_l_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_r_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_r_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_r_fl", field);
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
  {  // z_l_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_l_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_l_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_r_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_r_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_r_rr", field);
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
  {  // z_l_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_l_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_l_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_r_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_r_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_r_rl", field);
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
  {  // z_l_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_l_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_l_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
