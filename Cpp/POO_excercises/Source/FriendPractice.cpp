#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\FriendPractice.hpp"
#include <iostream>

/*
Just as a reminder, always put constructor definitions,
even if they are not going to be used.
In summary, if a function is declared in the "hpp" file,
you must give it a definition, it does not matter if they
are empty.
*/
FriendPractice::FriendPractice()
{

}

FriendPractice::~FriendPractice()
{

}

void friendFunc(FriendPractice &obj)
{
    obj.pvtMemberTxt = "\nA friend function has been used, and this private memeber was modified by that function.\n\n";
    std::cout << obj.pvtMemberTxt;
}
