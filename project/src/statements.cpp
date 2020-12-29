#include <statements.hpp>

/*
    Programs are not limited to a linear sequence of statements. 
    During its process, a program may repeat segments of code, or take decisions and bifurcate. 
    For that purpose, C++ provides flow control statements that serve to specify what has to be 
    done by our program, when, and under which circumstances.
*/

inline bool isEqual(int a, int b)
{
    return (a == b ? true : false);
}

// Selection statements:

void selectionStatements()
{
    bool condition1 = isEqual(1, 2);
    bool condition2 = isEqual(2, 2);

    // The if keyword is used to execute a statement or block, if, and only if, a condition is fulfilled.
    if (condition1) {
        std::cout << "This won't print" << std::endl;
    } else if (condition2) {
        std::cout << "2 is equal to 2!" << std::endl;
    } else {
        std::cout << "This also won't print" << std::endl;
    }

    char x = 'c';

    // The switch statement purpose is to check for a value among a number of possible constant expressions.
    switch (x)
    {
        case 'a':
            std::cout << "x is \'a\'!\n";
            break;
        case 'b':
            std::cout << "x is '\b\'!\n";
            break;
        default:
            std::cout << "x is neither \'a\' nor \'b\'!\n";
            break;
    }
}

// Iteration statements (loops):

void iterationStatements()
{
    // The while-loop simply repeats statement while expression is true.
    const char* n = "while";
    const char* it = n;
    while (*it) {
        // n++ will return the previous n value, and then increment it.
        std::cout << *it << " ";
        it++; // start pointing for the next memory reference.
    }
    std::cout << std::endl;

    // The do-while loop behaves like a while-loop, except that condition is evaluated after the execution of statement instead of before.
    n = "do-while";
    it = n;
    do {
        std::cout << *it << " ";
        it++;
    } while (*it);
    std::cout << std::endl;

    // The for loop is designed to iterate a number of times.
    n = "for";
    for(const char* i = n; *i; i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    /*
        Range-based for loop: 
        Syntax: for ( declaration : range ) statement;
        It iterates over all the elements in range, where declaration declares some variable able to take the value of an element in this range. Ranges are sequences of elements, including arrays, containers, and any other type supporting the functions begin and end
    */ 
    for(char i : "range-based for") {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}

// Jump statements:

void jumpStatements()
{
    // The break statement leaves a loop, even if the condition for its end is not fulfilled.
    for(int i = 0; i < 5; i++) {
        std::cout << i << " ";
        if(i == 3) {
            std::cout << "break!\n";       
            break;
        }
    }

    // The continue statement causes the program to skip the rest of the loop in the current iteration
    for(int i = 0; i < 5; i++) {
        if(i == 2) {
            std::cout << "continue! ";
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // The goto statement allows to make an absolute jump to another point in the program.
    int i = 0;
myLabel:
    std::cout << i++ << " ";
    if(i<5) goto myLabel;
    std::cout << std::endl;
}