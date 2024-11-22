#include "iter.hpp"

void printTab(int tab) {
    std::cout << tab << " ";
}

void printString(const std::string &str) {
    std::cout << str << " ";
}

void printDouble(double d) {
    std::cout << d << " ";
}

void doubleValue(double &d) {
    d *= 2;
}

template <typename T>
void increment(T& tab) {
    tab++;
}

int main()
{
    std::cout << WHITE << "--- TEST: Array Int ---" << std::endl;;
    int intArray[] = {1, 2, 3, 4 ,5};
    std::cout << LIME << "Before increment : " << PINK;
    iter(intArray, 5, printTab);
    std::cout << std::endl;

    iter(intArray, 5, increment<int>);

    std::cout << LIME << "After increment : " << PINK;
    iter(intArray, 5, printTab);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << WHITE << "--- TEST: Array Char ---" << std::endl;;
    std::string strArray[] = {"Hello", "World", "42"};
    std::cout << LIME << "String of char : " << PINK;
    iter(strArray, 3, printString);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << WHITE << "--- TEST: Array Double ---" << std::endl;;
    double doubleArray[] = {1.1, 2.2, 3.3};
    std::cout << LIME << "Before increment : " << PINK;
    iter(doubleArray, 3, printDouble);
    std::cout << std::endl;

    iter(doubleArray, 3, doubleValue);
    
    std::cout << LIME << "Before increment : " << PINK;
    iter(doubleArray, 3, printDouble);
    std::cout << "\n";

    return 0;
}