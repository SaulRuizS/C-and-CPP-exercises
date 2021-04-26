#include "datatypes_size.h"
#include <iostream>

datatypes_size::datatypes_size()
{
	std::cout << "----------Size in Bytes of Basic Data Types in C++----------\n";
}

void datatypes_size::sizePrint()
{
	std::cout << "The size in bytes of int is: " << sizeof(int) << std::endl;
	std::cout << "The size in bytes of float is: " << sizeof(float) << std::endl;
	std::cout << "The size in bytes of char is: " << sizeof(char) << std::endl;
	std::cout << "The size in bytes of double is: " << sizeof(double) << std::endl;
	std::cout << "The size in bytes of long double is: " << sizeof(long double) << std::endl;
	std::cout << "The size in bytes of bool is: " << sizeof(bool) << std::endl;
	std::cout << "The size in bytes of long is: " << sizeof(long) << std::endl;
	std::cout << "The size in bytes of long long is: " << sizeof(long long) << std::endl;
	std::cout << "The size in bytes of short is: " << sizeof(short) << std::endl;
}