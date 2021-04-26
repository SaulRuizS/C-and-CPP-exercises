#ifndef OPERATOROLPRACTICE_HPP
#define OPERATOROLPRACTICE_HPP
#include <iostream>

class OperatorOLPractice
{
private:

public:
    int number;
    OperatorOLPractice();
    OperatorOLPractice(int num);
    ~OperatorOLPractice();
    int getNumber();

    /*
        The "operator" keyword allows to create a new kind of function using
        some of the basic operators in C++, like '+', '-', '=', '<<', '~', 
        and a lot more.
        This functions are used in structs and classes to make the code more
        "neat" and for other situations that it is better to implement this
        feature.
    */
    OperatorOLPractice operator+ (OperatorOLPractice& obj)
    {
        OperatorOLPractice result;
        result.number = (*this).number + obj.number;
        return result;
    }
    /*
        The "this" keyword is not obligatory, but beacuse we are working
        in the class, is more practical use "this" instead of creting a
        pointer of the class. In case of work outside of the class, a 
        class pointer must be created.
    */
};

#endif