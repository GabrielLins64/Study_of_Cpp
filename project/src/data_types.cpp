#include <data_types.hpp>

template <typename T>
void showTypeInfo(const char* tp_name)
{
    std::cout << "~~~~~~~~~ X ~~~~~~~~~ X ~~~~~~~~~" << std::endl;
    std::cout << "Type: " << tp_name << std::endl;
    std::cout << "Size of " << typeid(T).name() << ": " << sizeof(T) << " bytes" << std::endl;
    std::cout << "Minimum value: " << std::numeric_limits<T>::min() << std::endl;
    std::cout << "Maximum value: " << std::numeric_limits<T>::max() << std::endl;
    std::cout << "Is signed: " << std::numeric_limits<T>::is_signed << std::endl;
    std::cout << "Non-sign bits: " << std::numeric_limits<T>::digits << std::endl;
    std::cout << "Has infinity: " << std::numeric_limits<T>::has_infinity << std::endl;
    std::cout << "~~~~~~~~~ X ~~~~~~~~~ X ~~~~~~~~~" << std::endl;
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