#include "Bureaucrat.hpp"

int main() {
    try {
        std::cout << "Bureaucrat Tom 1 Constructor called" << std::endl;
        Bureaucrat tom("Tom", 1);

        std::cout << "Bureaucrat Jerry 150 Constructor called" << std::endl;
        Bureaucrat jerry("Jerry", 150);

        std::cout << tom << std::endl;
        std::cout << jerry << std::endl;

        std::cout << LIME << "\nTest incremental on Tom (grade 1)" << WHITE << std::endl;
        try {
            tom.incrementeGrade();
        } catch (const std::exception& e) {
            std::cout << PINK << "Exception catch : " << e.what() << std::endl;
        }

        std::cout << LIME << "\nTest decremental on Jerry (grade 150)" << WHITE << std::endl;
        try {
            jerry.decrementeGrade();
        } catch (const std::exception& e) {
            std::cout << PINK << "Exception catch : " << e.what() << std::endl;
        }

        std::cout << LIME << "\nTest constructor with invalid grade up" << WHITE << std::endl;
        try {
            std::cout << "Bureaucrat Spike 0 Constructor called" << std::endl;
            Bureaucrat spike("Spike", 0);
        } catch (const std::exception& e) {
            std::cout << PINK << "Exception catch : " << e.what() << std::endl;
        }

        std::cout << LIME << "\nTest constructor with invalid grade down" << WHITE << std::endl;
        try {
            std::cout << "Bureaucrat Butch 200 Constructor called" << std::endl;
            Bureaucrat butch("Butch", 200);
        } catch (const std::exception& e) {
            std::cout << PINK << "Exception catch : " << e.what() << WHITE << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}
