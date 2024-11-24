#include "Span.hpp"

int main() {

    Span span1(2);

    span1.addNumber(50);
    span1.addNumber(5);
    span1.addNumber(10);
    span1.addNumber(20);
    span1.addNumber(26);

    std::cout << span1 << std::endl;

// try {

//     std::cout << WHITE << "---- TEST : DOUBLON ----" << std::endl;
//     try {
//         span1.addNumber(26);

//     }   catch ( std::exception &e ) {
//         std::cerr << PINK << e.what() << WHITE << std::endl;
//     }

//     std::cout << WHITE << "---- TEST : SHORTEST SPAN ----" << std::endl;
//     try {
//         size_t shortest = span1.shortestSpan();
//         std::cout << LIME << "Shortest span: " << PINK << shortest << std::endl;
    
//     }   catch ( std::exception &e ) {
//         std::cerr << PINK << e.what() << WHITE << std::endl;
//     }

//      std::cout << WHITE << "---- TEST : LONGEST SPAN ----" << std::endl;
//     try {
//         size_t longest = span1.longestSpan();
//         std::cout << LIME << "Shortest span: " << PINK << longest << std::endl;
    
//     }   catch ( std::exception &e ) {
//         std::cerr << PINK << e.what() << WHITE << std::endl;
//     }
// } catch (const std::exception &e) {
//     std::cerr << PINK << e.what() << WHITE << std::endl;
// }
//     return 0;
}