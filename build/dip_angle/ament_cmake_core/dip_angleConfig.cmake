# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dip_angle_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dip_angle_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dip_angle_FOUND FALSE)
  elseif(NOT dip_angle_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dip_angle_FOUND FALSE)
  endif()
  return()
endif()
set(_dip_angle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dip_angle_FIND_QUIETLY)
  message(STATUS "Found dip_angle: 0.0.0 (${dip_angle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dip_angle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dip_angle_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dip_angle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${dip_angle_DIR}/${_extra}")
endforeach()
