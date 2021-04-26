#ifndef THISPTRPRACTICE_HPP
#define THISPTRPRACTICE_HPP
#include <iostream>

class ThisPtrPractice
{
private:
    std::string thisPtrMsg;

public:
    ThisPtrPractice();
    ~ThisPtrPractice();
    void thisFunc();
};

#endif