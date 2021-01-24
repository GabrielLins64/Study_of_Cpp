#!/bin/bash

# Compile all source files to object files in "build", and link those into a binary in "bin"
rm build/*
LIB_PATH="lib/"
g++ -std=c++17 -Iinclude -I"${LIB_PATH}/include" -c src/*.cpp && \
mv *.o build/
g++ build/*.o -o "bin/a.out" -L"${LIB_PATH}" && \
export LD_LIBRARY_PATH="${LIB_PATH}" && ./bin/a.out
