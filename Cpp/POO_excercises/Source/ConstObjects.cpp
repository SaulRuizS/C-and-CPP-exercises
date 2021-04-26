#include <iostream>
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\headers\ConstObjects.hpp"

ConstObjects::ConstObjects(/* args */)
{
}

ConstObjects::~ConstObjects()
{
}

/*
Only non-const objects can call non-const functions.
*/
int ConstObjects::moduleOfTwoNumbers(int a, int b) //non-const function.
{
    return a % b;
}

//--------Const Function------------
/*
Const functions must be finished with the "const" keyword, this have to be 
made in the declaration of the function (header file) and in its definition
(cpp file).
*/
double ConstObjects::sqrNum(double a) const
{
    return a * a;
}
