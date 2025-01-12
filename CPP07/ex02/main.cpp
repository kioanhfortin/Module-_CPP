#include <iostream>
#include "array.hpp"

#define MAX_VAL 0
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "Number : " << std::endl;
    std::cout << numbers << std::endl;

    std::cout << "Mirror : " << std::endl;
    for (size_t i = 0; i < MAX_VAL; i++) {
       std::cout << i << ": " << mirror[i] << std::endl;
    }
    std::cout << std::endl;

    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[3] = 0;
        // numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
        // numbers[MAX_VAL + 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //stress test (modification valide après initialisation) && persistance (même suite à une erreur flag par un try catch)
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    std::cout << "Number : " << std::endl;
    std::cout << numbers << std::endl;

    std::cout << "Mirror : " << std::endl;
    for (size_t i = 0; i < MAX_VAL; i++) {
       std::cout << i << ": " << mirror[i] << std::endl;
    }
    std::cout << std::endl;

    delete [] mirror;
    return 0;
}
