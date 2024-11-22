#include "whatever.hpp"

int main( void ) {
    Whatever type;
    int a = 2;
    int b = 3;
    type.swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << type.min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << type.max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    type.swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << type.min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << type.max( c, d ) << std::endl;
    return 0;
}