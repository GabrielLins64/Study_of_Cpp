#!/bin/bash

# Defining some env (shell) variables and cleaning build directory
CPP_VERSION=17
LIB_DIR="lib"
BUILD_DIR="build"
BINARY_DIR="bin"
INCLUDE_DIR="include"
SOURCE_DIR="src"
EXECUTABLE_FILENAME="Study_of_Cpp"
rm -r ${BUILD_DIR}/*

# Compile all source files to object files in "build"
g++ -std=c++${CPP_VERSION} -I${INCLUDE_DIR} -I"${LIB_DIR}/include" -c ${SOURCE_DIR}/*.cpp && \
mv *.o ${BUILD_DIR}/

# Link object files and library objects into a executable binary in "bin"
g++ ${BUILD_DIR}/*.o -o "${BINARY_DIR}/${EXECUTABLE_FILENAME}" -L"${LIB_DIR}" && \
export LD_LIBRARY_DIR="${LIB_DIR}" && ./${BINARY_DIR}/${EXECUTABLE_FILENAME}
