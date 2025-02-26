# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_soft_robot_bringub_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED soft_robot_bringub_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(soft_robot_bringub_FOUND FALSE)
  elseif(NOT soft_robot_bringub_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(soft_robot_bringub_FOUND FALSE)
  endif()
  return()
endif()
set(_soft_robot_bringub_CONFIG_INCLUDED TRUE)

# output package information
if(NOT soft_robot_bringub_FIND_QUIETLY)
  message(STATUS "Found soft_robot_bringub: 0.0.0 (${soft_robot_bringub_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'soft_robot_bringub' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${soft_robot_bringub_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(soft_robot_bringub_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${soft_robot_bringub_DIR}/${_extra}")
endforeach()
