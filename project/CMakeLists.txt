# CMake minimum version required for usage.
# You can check which version you have with:
# $ cmake --version
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Study_of_Cpp VERSION 0.1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Setting project directories:
set(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(PROJECT_LIB_DIR "${PROJECT_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

# The includes directory
include_directories(${PROJECT_INCLUDE_DIR})

# Adding subdirectories for tracking other CMakeLists.txt files
add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(src)
