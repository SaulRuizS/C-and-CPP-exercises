#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\MyExampleClass.hpp"
#include <iostream>

/*
------Member Initializers----
This allows to initialize easily and more neat variables in a constructor.
Is not obligatory to use Member Initializers with every variable,
but const variables must use it.
*/ 
/*
MyExampleClass::MyExampleClass()
{

}
*/
MyExampleClass::MyExampleClass(int a, int b)
    : regVariable(a), constVariable(b)
    /*
    The character ':' begin the initialization of members and those members 
    receives the arguments from the constructor as value.
    */
{
    std::cout << regVariable << std::endl;
    std::cout << constVariable << std::endl;
}

MyExampleClass::~MyExampleClass()
{
}