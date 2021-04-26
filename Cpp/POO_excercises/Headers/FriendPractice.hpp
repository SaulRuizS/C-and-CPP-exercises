#ifndef FRIENDPRACTICE_HPP
#define FRIENDPRACTICE_HPP
#include <iostream>

class FriendPractice
{
private:
    /* data */
    std::string pvtMemberTxt;
public:
    FriendPractice(/* args */);
    ~FriendPractice();
/*
The "friend" keyword allows a function that its not a member of the class,
to acces to the private members of a class. However, the class must be 
declared inside the class.
Also, to being able to access the private members of a class, an object of
the class must be passed by reference as a parameter, like the example 
shown below.
*/
friend void friendFunc(FriendPractice &obj);
};

#endif