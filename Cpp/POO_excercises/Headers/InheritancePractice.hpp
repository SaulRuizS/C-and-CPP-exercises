#ifndef INHERITANCEPRACTICE_HPP
#define INHERITANCEPRACTICE_HPP
#include <string>

    class Player
    {
        public:
            Player();
            ~Player();

            int score;
            std::string position;
            /*
                The "virtual" keyword allows a method to be overriden by
                any of the derived classes.
                If a virtual method is defined by 0 
                (e.g. virtual void METHOD_NAME() = 0), then it's called
                "pure virtual" method, and must be overriden by a child
                class.
                A class that is compound of "pure virtual" methods
                it's called "abstract class".
            */
            virtual void movement(std::string move);
    };

    /*
        Inheritance basically consist in create a class from another, this is
        in a hierarchy way, where the class of mayor rank would be the base or
        father class, and all the classes derived from that are the child or
        just derived classes.
    */

    class Player1 : public Player
    {
        private:

        public:
            Player1(int scr, std::string posP1);
            ~Player1();

            void movement(std::string move);
    };

    /*
        The child classes takes the parent's members depending in which acces
        specifier were they derived.
        "public" child will take all the public and protected memebers from the 
        parent.
        "protected" child will take public and protected members from base class
        and make them protected members.
        "private" child will take public and protected members as private.
    */

    class Player2 : public Player
    {
        private:

        public:
            Player2(int scr, std::string posP2);
            ~Player2();

            void movement(std::string move);
    };

#endif