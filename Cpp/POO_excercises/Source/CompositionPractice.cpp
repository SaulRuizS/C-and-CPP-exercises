#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\CompositionPractice.hpp"
#include <iostream>

CompositionPractice::CompositionPractice(std::string cm, MyExampleClass mecObj) : compMsg(cm), mec(mecObj)
{
    std::cout << compMsg << "\n\n";
}

CompositionPractice::~CompositionPractice()
{

}