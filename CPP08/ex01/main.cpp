#include "Span.hpp"

int main() {

    Span span1(6);

    span1.addNumber(1);
    span1.addNumber(3);
    span1.addNumber(5);
    span1.addNumber(6);
    span1.addNumber(0);

    std::cout << span1 << std::endl;

    try {

        std::cout << WHITE << "---- TEST : DOUBLON ----" << std::endl;
        try {
            span1.addNumber(5);

        } catch ( Span::NbDoublon &e ) {
            std::cerr << PINK << e.what() << WHITE << std::endl;
        } 
   
        std::cout << std::endl;

        std::cout << WHITE << "---- TEST : SHORTEST SPAN ----" << std::endl;
        try {
            size_t shortest = span1.shortestSpan();
            std::cout << LIME << "Shortest span: " << PINK << shortest << std::endl;
        
        }   catch ( std::exception &e ) {
            std::cerr << PINK << e.what() << WHITE << std::endl;
        }
        std::cout << std::endl;

        std::cout << WHITE << "---- TEST : LONGEST SPAN ----" << std::endl;
        try {
            size_t longest = span1.longestSpan();
            std::cout << LIME << "Shortest span: " << PINK << longest << std::endl;
        
        }   catch ( std::exception &e ) {
            std::cerr << PINK << e.what() << WHITE << std::endl;
        }
        std::cout << std::endl;

    } catch (const std::exception &e) {
        std::cerr << PINK << e.what() << WHITE << std::endl;
    }
        return 0;
}