# Includes this path as an include dir in
# the main project. This must be included
# AFTER the executables inclusion. So, 
# this is why this subdirectory is added
# only after the src directory.
target_include_directories(Study_of_Cpp 
    PUBLIC ${PROJECT_INCLUDE_DIR} # Same as PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
