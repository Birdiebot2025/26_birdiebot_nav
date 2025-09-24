# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_potential_escape_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED potential_escape_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(potential_escape_FOUND FALSE)
  elseif(NOT potential_escape_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(potential_escape_FOUND FALSE)
  endif()
  return()
endif()
set(_potential_escape_CONFIG_INCLUDED TRUE)

# output package information
if(NOT potential_escape_FIND_QUIETLY)
  message(STATUS "Found potential_escape: 0.0.0 (${potential_escape_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'potential_escape' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${potential_escape_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(potential_escape_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${potential_escape_DIR}/${_extra}")
endforeach()
