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

    std::cout << "Input successfully parsed. Ready for sorting.\n";
    std::cout << "Before sorting:" << std::endl;
    printVector(pm.getNumbers());
    std::cout << "Recursive deviding." << std::endl;
    dequee oddElement = recursiveDividing(pm.getNumbers(), pm.getPairs());
    std::cout << "Create sequence." << std::endl;
    createSequences(pm.getPairs(), pm.getMain(), pm.getPend());
    std::cout << "Binary insert using the jacobsthal sequence." << std::endl;
    insertPendIntoMain(main, pend);
    std::cout << "Binary insert odd element." << std::endl;
    insertPendOddIntoMain(main, pend, oddElement);
    std::cout << "After sorting:" << std::endl;
    printVector(main);
    return 0;
}