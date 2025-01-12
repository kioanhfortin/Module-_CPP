#include "base.hpp"

Base::Base() {}

Base::~Base() {}

Base *generate(void) {
    std::srand(std::time(nullptr));
    int val = rand() % 3;

    switch (val) {
        case 0:
            std::cout << WHITE << "Generated: A" << std::endl;
            return new A();
        case 1:
            std::cout << WHITE << "Generated: B" << std::endl;
            return new B();
        case 2:
            std::cout << WHITE << "Generated: C" << std::endl;
            return new C();
        default:
            return NULL;
    }
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        { std::cout << PINK << 'A' << WHITE << std::endl; }
    else if (dynamic_cast<B*>(p))
        { std::cout << PINK << 'B' << WHITE << std::endl; }
    else if (dynamic_cast<C*>(p))
        { std::cout << PINK << 'C' << WHITE << std::endl; }
    else
        { std::cout << PINK << "Unknown Type" << WHITE << std::endl; }
}

void identify(Base &p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << PINK << 'A' << WHITE << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        (void) dynamic_cast<B&>(p);
        std::cout << PINK << 'B' << WHITE << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << PINK << 'C' << WHITE << std::endl;
        return;
    } catch (std::bad_cast&) {}

    std::cout << PINK << "Unknown Type" << WHITE << std::endl;
}