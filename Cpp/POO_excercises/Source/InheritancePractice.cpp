#include "G:\Documentos\Programacion\CyCpp\C_and_Cpp\Cpp\POO_excercises\Headers\InheritancePractice.hpp"
#include <iostream>

Player::Player(){}

Player::~Player(){}

void Player::movement(std::string move)
{
    std::cout << "\nThe player moved to " << move;
}
/*
    Child classes (depending in the access specifier) will inherit the 
    members of the father class, whit exception of:
    -Contructors
    -Destructors
    -Overloaded operators
    -Friend functions
*/

//---------Player 1---------------
Player1::Player1(int scrP1, std::string posP1)
{
    score = scrP1; 
    position = posP1;
    std::cout << "\nThe player 1 score is " << score << ", and its initial position is " << position;
}

Player1::~Player1(){}

void Player1::movement(std::string move)
{
    std::cout << "\nThe player 1 moved to " << move;
}


//----------Player 2--------------
Player2::Player2(int scrP2, std::string posP2) 
{
    score = scrP2; 
    position = posP2;
    std::cout << "\nThe player 2 score is " << score << ", and its initial position is " << position;
}

Player2::~Player2(){}

void Player2::movement(std::string move)
{
    std::cout << "\nThe player 2 moved to " << move;
}