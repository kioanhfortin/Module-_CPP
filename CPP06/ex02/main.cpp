#include "base.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void) {
    std::srand(std::time(NULL));
    int val = rand() % 3;

    switch (val) {
        case 0:
            std::cout << "Generated: A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated: B" << std::endl;
            return new B();
        case 2:
            std::cout << "Generated: C" << std::endl;
            return new C();
        default:
            return NULL;
    }
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p)) { std::cout << 'A' << std::endl; }
    else if (dynamic_cast<B*>(p)) { std::cout << 'B' << std::endl; }
    else if (dynamic_cast<C*>(p)) { std::cout << 'C' << std::endl; }
    else { std::cout << "Unknown Type" << std::endl; }
}

void identify(Base &p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << 'A' << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        dynamic_cast<B&>(p);
        std::cout << 'B' << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << 'C' << std::endl;
        return;
    } catch (std::bad_cast&) {}

    std::cout << "Unknown Type" << std::endl;
}

int main()
{
    Base *base = generate();

    std::cout << LIME << "Identification by ptr:" << std::endl;
    identify(*base);

    std::cout << LIME << "Identification by adr:" << std::endl;
    identify(&base);

    delete(base);

    return 0;
}