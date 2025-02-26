cmake_minimum_required(VERSION 3.20)
project(bin_lfs)

# Find Python components
find_package(Python 3.12 REQUIRED COMPONENTS Interpreter Development.Module)

# Build Release by default
if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

# Add the subdirectory containing our C++ code
add_subdirectory(src/vendor)
add_subdirectory(src/cpp)
