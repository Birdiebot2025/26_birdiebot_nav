// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
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
#include "rm_decision_interfaces/msg/detail/cv_decision__struct.h"
#include "rm_decision_interfaces/msg/detail/cv_decision__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_decision_interfaces__msg__cv_decision__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rm_decision_interfaces.msg._cv_decision.CvDecision", full_classname_dest, 50) == 0);
  }
  rm_decision_interfaces__msg__CvDecision * ros_message = _ros_message;
  {  // game_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_progress");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_progress = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stage_remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_remain_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stage_remain_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_1_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_1_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_1_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_2_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_2_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_2_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_3_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_3_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_3_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_4_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_4_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_4_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_7_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_7_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_7_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_1_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_1_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_1_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_2_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_2_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_2_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_3_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_3_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_3_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_4_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_4_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_4_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_7_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_7_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_7_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // maximum_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maximum_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_17_mm_1_barrel_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_17_mm_1_barrel_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_17_mm_1_barrel_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_17_mm_2_barrel_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_17_mm_2_barrel_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_17_mm_2_barrel_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // projectile_allowance_17mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "projectile_allowance_17mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->projectile_allowance_17mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_gold_coin
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_gold_coin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_gold_coin = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // center_gain_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_gain_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_gain_point = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // team_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "team_color");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->team_color = (Py_True == field);
    Py_DECREF(field);
  }
  {  // decision_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "decision_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->decision_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_decision_interfaces__msg__cv_decision__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CvDecision */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_decision_interfaces.msg._cv_decision");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CvDecision");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_decision_interfaces__msg__CvDecision * ros_message = (rm_decision_interfaces__msg__CvDecision *)raw_ros_message;
  {  // game_progress
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_progress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_remain_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stage_remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_1_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_1_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_1_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_2_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_2_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_2_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_3_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_3_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_3_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_4_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_4_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_4_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_7_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_7_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_7_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_1_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_1_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_1_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_2_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_2_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_2_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_3_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_3_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_3_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_4_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_4_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_4_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_7_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_7_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_7_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximum_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maximum_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_17_mm_1_barrel_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_17_mm_1_barrel_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_17_mm_1_barrel_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_17_mm_2_barrel_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_17_mm_2_barrel_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_17_mm_2_barrel_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // projectile_allowance_17mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->projectile_allowance_17mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "projectile_allowance_17mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_gold_coin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remaining_gold_coin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_gold_coin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_gain_point
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->center_gain_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_gain_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // team_color
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->team_color ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "team_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decision_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->decision_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decision_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
