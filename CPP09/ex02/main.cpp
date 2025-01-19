#include "PmergeMe.hpp"

int main(int argc, char** argv) {
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
    std::cout << std::endl;

    std::cout << "Recursive deviding." << std::endl;
    int oddElement = recursiveDividing(pm.getNumbers(), pm.getPairs(), 0);
    printDeque(pm.getPairs());
    std::cout << "Odd element: " << oddElement << std::endl;
    std::cout << std::endl;

    std::cout << "Create sequence." << std::endl;
    createSequences(pm.getPairs(), pm.getMain(), pm.getPend());
    printVector(pm.getMain());
    printVector(pm.getPend());
    std::cout << std::endl;

    std::cout << "Binary insert using the Jacobsthal sequence." << std::endl;
    insertPendIntoMain(pm.getMain(), pm.getPend());
    printVector(pm.getMain());
    std::cout << std::endl;

    std::cout << "Binary insert odd element." << std::endl;
    insertPendOddIntoMain(pm.getMain(), oddElement);
    printVector(pm.getMain());
    std::cout << std::endl;

    std::cout << "After sorting:" << std::endl;
    printVector(pm.getMain());
    return 0;
}