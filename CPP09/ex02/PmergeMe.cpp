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

void recursiveDividing(std::vector<int>& elements, std::vector<Pair>& pairs,  int depth = 0) {

    if(elements.size() < 2)
        return;

    std::vector<int> nextElements;

    for (size_t i = 0; i < elements.size(); i += 2) {
        Pair p(elements[i], elements[i + 1]);
        pairs.push_back(p);
        nextElements.push_back(p.a);
    }
    if ((elements.size() % 2) != 0) {
        nextElements.push_back(elements.back()); //Ajoute number impair
    }
    std::sort(nextElements.begin(), nextElements.end());
    recursiveDividing(nextElements, pairs, depth + 1);
}

void createSequences(const std::vector<Pair> &pairs, std::vector<int> &main, std::vector<int> &pend) {
    if (pairs.empty())
        return;
    main.push_back(pairs[0].b);

    for(size_t i = 0; i < pairs.size(); i++) {
        main.push_back(pairs[i].a);
        if (i != 0) {
            pend.push_back(pairs[i].b);
        }
    }
}

