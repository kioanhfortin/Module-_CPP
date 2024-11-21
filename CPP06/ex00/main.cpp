#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2) {
        
        Convert::detectType(argv[1]);
    }
    else
        std::cout << "Error: ./conver <number>" << std::endl;
}