/*
    Standard and other C++ data types
*/

#include "data_types.hpp"
#include <iostream> // cout
#include <typeinfo> // typeid()
#include <limits> // numeric_limits

using namespace std;

template <typename T>
void showTypeInfo(const char* tp)
{
    cout << "~~~~~~~~~ X ~~~~~~~~~ X ~~~~~~~~~" << endl;
    cout << "Type: " << tp << endl;
    cout << "Size of " << typeid(T).name() << ": " << sizeof(T) << " bytes" << endl;
    cout << "Minimum value: " << numeric_limits<T>::min() << endl;
    cout << "Maximum value: " << numeric_limits<T>::max() << endl;
    cout << "Is signed: " << numeric_limits<T>::is_signed << endl;
    cout << "Non-sign bits: " << numeric_limits<T>::digits << endl;
    cout << "Has infinity: " << numeric_limits<T>::has_infinity << endl;
    cout << "~~~~~~~~~ X ~~~~~~~~~ X ~~~~~~~~~" << endl;
}

void showTypes()
{
    showTypeInfo<short int>("short int");
    showTypeInfo<unsigned short int>("unsigned short int");
    showTypeInfo<unsigned int>("unsigned int");
    showTypeInfo<int>("int");
    showTypeInfo<long int>("long int");
    showTypeInfo<unsigned long int>("unsigned long int");
    showTypeInfo<long long int>("long long int");
    showTypeInfo<unsigned long long int>("unsigned long long int");
    showTypeInfo<signed char>("signed char"); // Same as char
    showTypeInfo<unsigned char>("unsigned char");
    showTypeInfo<float>("float");
    showTypeInfo<double>("double");
    showTypeInfo<long double>("long double");
    showTypeInfo<wchar_t>("wchar_t");
    showTypeInfo<bool>("bool");
}