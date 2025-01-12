#include "base.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>

int main()
{

    std::cout << WHITE << "---- TEST : Generate randomly and identificate ----" << WHITE << std::endl;
    Base *base = generate();

    std::cout << LIME << "Indentification by ptr:" << WHITE << std::endl;
    identify(base);

    std::cout << LIME << "Identification by adr:" << WHITE << std::endl;
    identify(*base);
    
    delete(base);
    std::cout << std::endl;
    
    std::cout << WHITE << "---- TEST : Indentificate a nullptr ----" << WHITE << std::endl;
    Base *base1 = nullptr;
    std::cout << LIME << "Identification by ptr:" << WHITE << std::endl;
    identify(base1);
    delete base1;
    std::cout << std::endl;

    std::cout << WHITE << "---- TEST : Mixed Object ----" << WHITE << std::endl;
    std::vector<Base*> object;
    object.push_back(new A());
    object.push_back(new B());
    object.push_back(new C());
    object.push_back(new B());
    object.push_back(new C());

    int count = 1;
    for (size_t i = 0; i < 5; i++) {
        Base *obj = object[i];
        std::cout << LIME << "Object " << count << " :" << WHITE << std::endl;
        identify(obj);

        std::cout << LIME << "Object " << count << " :" << WHITE << std::endl;
        identify(*obj);
        count++;
    }
    for (size_t i = 0; i < 5; i++) {
        delete object[i];
    }

    return 0;
}