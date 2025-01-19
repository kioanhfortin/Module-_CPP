#include <iostream>
#include <deque>
#include <ctime> // Pour clock() et CLOCKS_PER_SEC
#include "PmergeMe.hpp"
// #include "PmergeMeDeque.hpp"

// int main(int argc, char** argv) {
//     if (argc < 2) {
//         std::cerr << "Error: No arguments provided." << std::endl;
//         return 1;
//     }

//     PmergeMe pm;
//     parsing(argc, argv, pm);

//     if (pm.getNumbers().empty()) {
//         std::cerr << "Error: No valid numbers were parsed." << std::endl;
//         return 1;
//     }

//     std::cout << "Input successfully parsed. Ready for sorting.\n";
//     std::cout << "Before sorting:" << std::endl;
//     printdeque(pm.getNumbers());
//     std::cout << std::endl;

//     // Start timer
//     clock_t start_time = clock();

//     std::cout << "Recursive deviding." << std::endl;
//     int oddElement = recursiveDividing(pm.getNumbers(), pm.getPairs(), 0);
//     printdeque(pm.getPairs());
//     std::cout << "Odd element: " << oddElement << std::endl;
//     std::cout << std::endl;

//     std::cout << "Create sequence." << std::endl;
//     createSequences(pm.getPairs(), pm.getMain(), pm.getPend());
//     printdeque(pm.getMain());
//     printdeque(pm.getPend());
//     std::cout << std::endl;

//     std::cout << "Binary insert using the Jacobsthal sequence." << std::endl;
//     insertPendIntoMain(pm.getMain(), pm.getPend());
//     printdeque(pm.getMain());
//     std::cout << std::endl;

//     std::cout << "Binary insert odd element." << std::endl;
//     insertPendOddIntoMain(pm.getMain(), oddElement);
//     printdeque(pm.getMain());
//     std::cout << std::endl;

//     // End timer
//     clock_t end_time = clock();

//     std::cout << "After sorting:" << std::endl;
//     printdeque(pm.getMain());

//     // Calculate elapsed time in microseconds
//     double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000000.0;
//     std::cout << "Time to process a range of " << pm.getNumbers().size()
//               << " elements: " << elapsed_time << " µs" << std::endl;

//     return 0;
// }


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

    // Start timer
    clock_t start_time = clock();

    std::cout << "Recursive deviding." << std::endl;
    int oddElement = recursiveDividing(pm.getNumbers(), pm.getPairs(), 0);
    printVector(pm.getPairs());
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

    // End timer
    clock_t end_time = clock();

    std::cout << "After sorting:" << std::endl;
    printVector(pm.getMain());

    // Calculate elapsed time in microseconds
    double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000000.0;
    std::cout << "Time to process a range of " << pm.getNumbers().size()
              << " elements: " << elapsed_time << " µs" << std::endl;

    return 0;
}

// Time to process a range of 2936 elements: 35822 µs vector
// Time to process a range of 2908 elements: 30724 µs deque

// Time to process a range of 198 elements: 1176 µs vector
// Time to process a range of 200 elements: 629 µs deque

// Time to process a range of 6 elements: 38 µs vector
// Time to process a range of 6 elements: 48 µs deque
