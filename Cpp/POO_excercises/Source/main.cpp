#include <iostream>
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\MyExampleClass.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\headers\ConstObjects.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\FriendPractice.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\ThisPtrPractice.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\OperatorOLPractice.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\CompositionPractice.hpp"
#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\InheritancePractice.hpp"


using namespace std;

int main(int argc, char const *argv[])
{
    //-----------Members Initializer-------------------------
        MyExampleClass objMEC(32, 91);
    //-------------------------------------------------------

    //------------Constant Objects---------------------------
        ConstObjects objCO;
        int var1 = objCO.moduleOfTwoNumbers(8, 3);
        double var2 = objCO.sqrNum(7);
        cout << "The value" << var1 << ", is the result of a non-const function that returns the module of two numbers, and " << var2 << " is the result of a const function, that returns the square of a number.\n";
        const ConstObjects cstObjCO;
        double var3 = cstObjCO.sqrNum(4);
        cout << var3 << " is the same const function but from a const object.\n";
    //-------------------------------------------------------

    //-------------Friend Keyword----------------------------
        FriendPractice friendObj;
        friendFunc(friendObj);
    //-------------------------------------------------------

    //-------------"This" Keyword----------------------------
        ThisPtrPractice thisObj;
        thisObj.thisFunc();
    //-------------------------------------------------------

    //-------------"Operator Overload"-----------------------
        OperatorOLPractice opolObj1(33), opolObj2(56), res;
        res = opolObj1 + opolObj2;
        /*
            In this example, opolObj1 would be '(*this).number', 
            being the current instanced object whom it is being
            applied the operator '+'.
            opolObj2 would be 'obj.number' who is the argument 
            passed to the operator parameter.
        */
        cout << res.number << "\n\n";
        
    //-------------------------------------------------------

    //-------------"Composition Practice"--------------------
        MyExampleClass mecComPtc(25, 25);
        CompositionPractice comPtc("\nA CompotionPractice object has been created, and is compound of a MyExmapleClass object that printed the numbers above.\n",mecComPtc);
    //-------------------------------------------------------

    //-------------"Inheritance/Polymorphism Practice"--------------------
        Player1 P1(0, "Left");
        Player2 P2(0, "Right");

        Player *p1 = &P1;
        Player *p2 = &P2;

        p1->movement("2 spaces up");
        p2->movement("3 spaces down");
    //-------------------------------------------------------

    return 0;
}
/*
    "mutable" keyword
*/

/*
Compiler commands:

    Basic and clasic: 
        g++ [file name].cpp -o [executor name].exe (.exe optional)

    Object files:
        g++ -o [file name].o -c [file name].cpp
    
    Linking object files:
        g++ -o [executor name].exe [file_1 name].o [file_2 name].o

    Single command for all above (more work for the compiler):
        g++ -o [executor name].exe [file_1 name].cpp [file_2 name].cpp
*/