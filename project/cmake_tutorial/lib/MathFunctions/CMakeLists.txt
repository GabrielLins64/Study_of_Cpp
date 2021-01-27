# Add the MathFunctions library and its
# source code, only if USE_MYMATH is ON.
# Otherwise, it will not even compile
# "mysqrt.cpp" and doesn't generate the
# libMathFunctions.a at the lib directory
# in the cmake binary directory.
if(USE_MYMATH)
    add_library(MathFunctions mysqrt.cpp)
    # Usage requirements allow for far better control over a 
    # library or executable’s link and include line while 
    # also giving more control over the transitive property 
    # of targets inside CMake.
    # INTERFACE means things that consumers require but the 
    # producer doesn’t.
    target_include_directories(MathFunctions
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )
endif()

