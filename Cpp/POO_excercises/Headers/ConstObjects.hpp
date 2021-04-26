#ifndef CONSTOBJECTS_HPP
#define CONSTOBJECTS_HPP

class ConstObjects
{
private:
    /*
    Const variables must be initialized at the moment they are declared.
    */
   const double Pi = 3.141592;

public:
    ConstObjects(/* args */);
    ~ConstObjects();
    int moduleOfTwoNumbers(int a, int b);
    double sqrNum(double a) const;
};

#endif