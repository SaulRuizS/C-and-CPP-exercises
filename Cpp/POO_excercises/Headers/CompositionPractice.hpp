#ifndef COMPOSITIONPRACTICE_HPP
#define COMPOSITIONPRACTICE_HPP
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\MyExampleClass.hpp"
#include <iostream>
/*
Composition consist in complex objects compound of simplier objects.
*/
class CompositionPractice
{
private:
    std::string compMsg; 
    MyExampleClass mec;
public:
    CompositionPractice();
    CompositionPractice(std::string cm, MyExampleClass mecObj);
    ~CompositionPractice();
};

#endif