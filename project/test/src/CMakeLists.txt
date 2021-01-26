# Make building and linking MathFunctions library conditional
if(USE_MYMATH)
  # Add the MathFunctions library
  list(APPEND EXTRA_LIBS MathFunctions)
  list(APPEND EXTRA_INCLUDES "${PROJECT_LIBRARY_DIR}/MathFunctions")
endif()

# Add the executable for compilation
add_executable(Study_of_Cpp cmake_test.cpp)

# Targetting the libraries for linkage
target_link_libraries(Study_of_Cpp PUBLIC ${EXTRA_LIBS})

# The configured file will be written into the binary tree, so we must 
# add that directory to the list of paths to search for include files
target_include_directories(Study_of_Cpp PUBLIC
                            "${PROJECT_BINARY_DIR}/include"
                            "${EXTRA_INCLUDES}"
                          )
