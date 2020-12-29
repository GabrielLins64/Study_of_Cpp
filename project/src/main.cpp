/**
 * @file main.cpp
 * @author Gabriel Lins (gabrielinsmelo@gmail.com)
 * @brief Main source.
 * @version 0.1
 * @date 2020-12-29
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <global.hpp>
#include <data_types.hpp>
#include <concepts.hpp>
#include <statements.hpp>
/* 
    #include is a way of including a standard or user-defined file in the program
    Including using ” “: When using the double quotes(” “), the preprocessor access the current directory in which the source “header_file” is located. This type is mainly used to access any header files of the user’s program or user-defined files.
    Including using <>: While importing file using angular brackets(<>), the the preprocessor uses a predetermined directory path to access the file. It is mainly used to access system header files located in the standard system directories.
    iostream: Standard Input / Output Streams Library Header that defines the standard input/output stream objects.
*/

using namespace std;
/*
    A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.
    Identifiers outside the namespace can access the members by using the fully qualified name for each identifier, for example std::vector<std::string> vec;, or else by a using Declaration for a single identifier (using std::string), or a using Directive for all the identifiers in the namespace (using namespace std;). 
*/

int main(int argc, char* argv[])
/*
    A program shall contain a global function named main, which is the designated start of the program.
    The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.
*/
{
    // commandLineArguments(argc, argv);
    // showTypes();
    // selectionStatements();
    // iterationStatements();
    jumpStatements();

    return 0;
}