# Compiling

*This file contains some tips and commands for compiling with g++ and cmake.*

---

## g++

#### 1. Build commands (Linux):

- **Straightforward compiling:** When working in a small project, where you can compile all source files in small time, it is usefull to use the star operator for compiling. The command below will compile all sources in "src" directory to a "run.out" executable in "bin" directory: 

> *$ g++ -Iinclude src/\*.cpp -std=c++11 -o bin/run.out*

- **Object files creation:** When working in a big project, you will find out that the build time increases with the number of source files to be compiled. Therefore, in the first compilation you will generate all object files and move them into the "build" directory with:

> *$ g++ -Iinclude -c src/\*.cpp ; mv \*.o build/*
