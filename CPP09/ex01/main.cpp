#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: RNP \"nb +-/* nb\"" << std::endl;
        return 1;
    }
    RPN rpn;
    try {
        if (!getResult(argv[1], rpn))
            return 1;
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::cout << rpn.getStack().top() << std::endl;
    return 0;
}