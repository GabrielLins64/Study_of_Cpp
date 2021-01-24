# Compiling

*This file contains some tips and commands for compiling with g++ and cmake.*

---

## g++

#### Build commands (Linux):

- **Straightforward compiling:** When working in a small project, where you can compile all source files in small time, it is usefull to use the star operator for compiling. The command below will compile, using c++ 11, all sources in "src" directory, including the header files ".hpp" in "include" directory, directly to a "run.out" executable in "bin" directory:

> *$ g++ -std=c++11 src/\*.cpp -Iinclude -o bin/run.out*

- **Object files creation:** When working in a big project, you will find out that the build time increases with the number of source files to be compiled. Therefore, in the first compilation you will generate all object files ".o files" and move them into the "build" directory with:

> *$ g++ -std=c++11 -c src/\*.cpp -Iinclude && mv \*.o build/*

After this, you'll have to link those generated object files into an executable ".out" with:

> *$ g++ build/\*.o -o bin/run.out*

So, if you already have compiled all the sources and modified only a few of these, to avoid compiling everything again, you can generate the object files only from the modified sources and link all objects in a new executable. For example, suppose you only modified the "main.cpp" and "concepts.cpp" files, only this is necessary:

> *$ g++ -std=c++11 -Iinclude -c src/main.cpp src/concepts.cpp && mv \*.o build/ && g++ build/\*.o -o bin/run.o*

- **Running the executable:** Just do:

> *$ ./bin/run.out*

- **Automating with shell scripts:** You always can automatizate those tasks using *shell scripts* (".sh" files), like the one in the "project" directory. A more appropriate alternative would be compile all using *cmake*, which will be described below. 

---

## Cmake

