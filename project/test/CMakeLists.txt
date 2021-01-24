# From CMake Tutorial [4]

# CMake minimum version required for usage.
# You can check with "$ cmake --version"
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Study_of_Cpp VERSION 0.1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable for compilation
add_executable(Study_of_Cpp cmake_test.cpp)

# Configure a header file to pass the version number to the source code:
configure_file(TutorialConfig.h.in TutorialConfig.h)

# The configured file will be written into the binary tree, so we must 
# add that directory to the list of paths to search for include files.
target_include_directories(Study_of_Cpp PUBLIC
                            "${PROJECT_BINARY_DIR}"
                          )
