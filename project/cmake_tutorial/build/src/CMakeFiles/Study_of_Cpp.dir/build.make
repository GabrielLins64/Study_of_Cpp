# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Study_of_Cpp.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Study_of_Cpp.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Study_of_Cpp.dir/flags.make

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o: src/CMakeFiles/Study_of_Cpp.dir/flags.make
src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o: ../src/cmake_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o"
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o -c /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/src/cmake_test.cpp

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.i"
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/src/cmake_test.cpp > CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.i

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.s"
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/src/cmake_test.cpp -o CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.s

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.requires:

.PHONY : src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.requires

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.provides: src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Study_of_Cpp.dir/build.make src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.provides.build
.PHONY : src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.provides

src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.provides.build: src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o


# Object files for target Study_of_Cpp
Study_of_Cpp_OBJECTS = \
"CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o"

# External object files for target Study_of_Cpp
Study_of_Cpp_EXTERNAL_OBJECTS =

bin/Study_of_Cpp: src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o
bin/Study_of_Cpp: src/CMakeFiles/Study_of_Cpp.dir/build.make
bin/Study_of_Cpp: lib/MathFunctions/libMathFunctions.a
bin/Study_of_Cpp: src/CMakeFiles/Study_of_Cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/Study_of_Cpp"
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Study_of_Cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Study_of_Cpp.dir/build: bin/Study_of_Cpp

.PHONY : src/CMakeFiles/Study_of_Cpp.dir/build

src/CMakeFiles/Study_of_Cpp.dir/requires: src/CMakeFiles/Study_of_Cpp.dir/cmake_test.cpp.o.requires

.PHONY : src/CMakeFiles/Study_of_Cpp.dir/requires

src/CMakeFiles/Study_of_Cpp.dir/clean:
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Study_of_Cpp.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Study_of_Cpp.dir/clean

src/CMakeFiles/Study_of_Cpp.dir/depend:
	cd /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/src /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src /home/data-hunter/Computacao/DEV/Projects/Study_of_Cpp/project/cmake_tutorial/build/src/CMakeFiles/Study_of_Cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Study_of_Cpp.dir/depend
