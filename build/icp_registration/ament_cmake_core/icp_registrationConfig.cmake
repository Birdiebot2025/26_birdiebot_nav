# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_icp_registration_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED icp_registration_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(icp_registration_FOUND FALSE)
  elseif(NOT icp_registration_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(icp_registration_FOUND FALSE)
  endif()
  return()
endif()
set(_icp_registration_CONFIG_INCLUDED TRUE)

# output package information
if(NOT icp_registration_FIND_QUIETLY)
  message(STATUS "Found icp_registration: 0.0.0 (${icp_registration_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'icp_registration' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${icp_registration_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(icp_registration_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${icp_registration_DIR}/${_extra}")
endforeach()
