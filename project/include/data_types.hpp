/**
 * @file data_types.hpp
 * @author Gabriel Lins (gabrielinsmelo@gmail.com)
 * @brief Standard and other C++ data types
 * @version 0.1
 * @date 2020-12-29
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef DTYPES_HPP
#define DTYPES_HPP

#include <global.hpp>

/**
 * @brief Prints information about a type
 * 
 * @tparam T Type
 * @param tp_name String with the type name
 */
template <typename T> void showTypeInfo(const char* tp_name);

/**
 * @brief Prints information about all standard c++ data types
 * 
 */
void showTypes();

#endif