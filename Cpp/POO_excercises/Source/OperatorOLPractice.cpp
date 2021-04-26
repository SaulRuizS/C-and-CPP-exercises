#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\OperatorOLPractice.hpp"
#include <iostream>

OperatorOLPractice::OperatorOLPractice()
{
    //Default constructor
}

OperatorOLPractice::OperatorOLPractice(int num):number(num){}

OperatorOLPractice::~OperatorOLPractice()
{
}

int OperatorOLPractice::getNumber()
{
    return number;
}