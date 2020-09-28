/*
    Basic and advanced C++ standard concepts.
*/

#include <iostream>
#include "concepts.hpp"

using namespace std;

void commandLineArguments(int argc, char* argv[])
{
    cout << "Number of command line arguments (argc): " << argc << endl;
    for(int i = 0; i < argc; i++)
    {
        cout << "Argument (argv[" << i << "]): \"" << argv[i] << "\"" << endl;
    }
}