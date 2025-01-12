#include "PmergeMe.hpp"

bool isNumber(const std::string &token) {
    if (token.empty())
        return false;
    size_t i = 0;
    for (; i < token.size(); i++) {
        if (!std::isdigit(token[i]))
            return false;
    }
    return true;
}

void parsing(int argc, char **argv, PmergeMe &pm) {
    std::unordered_set<int> uniqueNumbers;
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (!isNumber(arg)) {
            std::cerr << "Error: Invalid input." << std::endl;
            exit(EXIT_FAILURE);
        }
        try {
            int num = std::stoi(argv[i]);
            if (num < 0) {
                throw std::invalid_argument("negative number");
            }
            if (uniqueNumbers.find(num) != uniqueNumbers.end()) {
                i++;
            } else {
                uniqueNumbers.insert(num);
                pm.getNumbers().push_back(num);
            }
        } catch (const std::exception &e) {
            std::cerr << "Error: Invalid input." << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}