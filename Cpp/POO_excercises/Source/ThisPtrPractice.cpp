#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\ThisPtrPractice.hpp"
#include <iostream>

ThisPtrPractice::ThisPtrPractice()
{

}

ThisPtrPractice::~ThisPtrPractice()
{

}

/*
The "this" keyword is a pointer of the current instanced object
*/
void ThisPtrPractice::thisFunc()
{
    thisPtrMsg = "\nThis message was assigned without the 'this' keyword.\n";
    std::cout << thisPtrMsg;

    this->thisPtrMsg = "\nThis message was assigned WITH the 'this' keyword.\n";
    std::cout << thisPtrMsg;

    (*this).thisPtrMsg = "\nThis message was assigned WITH the 'this' keyword, but in the pointer's classic way '(*this)'.\n\n";
    std::cout << thisPtrMsg;
}

void ThisPtrPractice::thisFunc()
{
    thisPtrMsg = "\nThis message was assigned without the 'this' keyword.\n";
    std::cout << thisPtrMsg;

    this->thisPtrMsg = "\nThis message was assigned WITH the 'this' keyword.\n";
    std::cout << thisPtrMsg;
}