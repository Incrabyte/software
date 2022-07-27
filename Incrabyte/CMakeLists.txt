# CMakeList.txt : CMake project for Incrabyte, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Incrabyte "main.cpp" "incrabyte.h" "encoder.cpp" "decoder.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Incrabyte PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
