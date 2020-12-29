/**
 * @file statements.hpp
 * @author Gabriel Lins (gabrielinsmelo@gmail.com)
 * @brief Examples with C++ language statements
 * @version 0.1
 * @date 2020-12-29
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef STATEMENTS_HPP
#define STATEMENTS_HPP

#include <global.hpp>


/**
 * @brief Compares, inline, if two integers are equal.
 * 
 * @param a First integer
 * @param b Second integer
 * @return true 
 * @return false 
 */
inline bool isEqual(int a, int b);

/**
 * @brief Examples with selection statements.
 * 
 * Uses "if" and "switch"
 */
void selectionStatements();

/**
 * @brief Examples with iteration statements.
 * 
 * Uses "for", "while", "do-while" and "range-based for".
 */
void iterationStatements();

/**
 * @brief Examples with jump statements.
 * 
 * Uses "break", "continue" and "goto".
 */
void jumpStatements();

#endif