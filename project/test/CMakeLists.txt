# From CMake Tutorial [4]

# CMake minimum version required for usage.
# You can check with "$ cmake --version"
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Study_of_Cpp VERSION 0.1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Setting, respectively, the library and the execu-
# table to be generated paths.
set(PROJECT_LIBRARY_DIR "${PROJECT_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Making the use of MathFunctions library optional
# This option will be displayed in the cmake-gui
# and ccmake with a default value of ON that can be
# changed by the user. This setting will be stored
# in the cache so that the user does not need to
# set the value each time they run CMake on a build
# directory. In case you want to change it by com-
# mand-line, use:
# $ cmake ../src -DUSE_MYMATH=OFF
# Then rebuild and run.
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# Adding the library, source and include directories
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(include)
