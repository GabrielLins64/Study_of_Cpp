# Add the MathFunctions library and its
# source code, only if USE_MYMATH is ON.
# Otherwise, it will not even compile
# "mysqrt.cpp" and doesn't generate the
# libMathFunctions.a at the lib directory
# in the cmake binary directory.
if(USE_MYMATH)
    add_library(MathFunctions mysqrt.cpp)
endif()
