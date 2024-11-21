#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>

#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

class Base {

    public :
        Base();
        virtual ~Base();

    private:

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif