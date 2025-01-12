#include "PmergeMe.hpp"

void printVector(const std::vector<int> &vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    
    if (argc < 2) {
        std::cerr << "Error: No arguments provided." << std::endl;
        return 1;
    }
    PmergeMe pm;
    parsing(argc, argv, pm);

    if (pm.getNumbers().empty()) {
        std::cerr << "Error: No valid numbers were parsed." << std::endl;
        return 1;
    }

    std::cout << "Before sorting:" << std::endl;
    printVector(pm.getNumbers());
    std::cout << "Input successfully parsed. Ready for sorting.\n";
    return 0;
}