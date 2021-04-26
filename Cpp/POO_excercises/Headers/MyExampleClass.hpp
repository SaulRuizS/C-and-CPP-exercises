#ifndef MYEXAMPLECLASS_HPP
#define MYEXAMPLECLASS_HPP

class MyExampleClass
{
private:
    int regVariable;
    const int constVariable;
public:
    MyExampleClass();   //Default constructor
    MyExampleClass(int a, int b);   //Parameterizied constructor
    ~MyExampleClass();
};

#endif