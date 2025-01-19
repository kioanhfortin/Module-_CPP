#include "PmergeMe.hpp"

void printVector(std::vector<int> &vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void printDeque(std::deque<int> &vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

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

int recursiveDividing(std::vector<int> &elements, std::deque<int> &pairs, int depth) {
 
    if(elements.size() < 2) {
        if (elements.size() == 1) {
            return elements[0];
        }
        return -1;
    }

    std::vector<int> nextElements;

    for (size_t i = 0; i + 1 < elements.size(); i += 2) {
        if (elements[i] < elements[i + 1]) {
            pairs.push_back(elements[i]);
            pairs.push_back(elements[i + 1]);
        } else {
            pairs.push_back(elements[i + 1]);
            pairs.push_back(elements[i]);
        }
        nextElements.push_back(std::max(elements[i], elements[i + 1]));
    }

    int oddElement = -1;
    if ((elements.size() % 2) != 0) {
        oddElement = elements.back(); //Ajoute number impair
    }

    int recursiveOdd = recursiveDividing(nextElements, pairs, depth + 1);

    if (recursiveOdd != -1) {
        return oddElement;
    }

    return oddElement;
}

void createSequences(const std::deque<int> &pairs, std::vector<int> &main, std::vector<int> &pend) {
    if (pairs.empty())
        return;

    main.push_back(pairs[0]);

    for(size_t i = 2; i < pairs.size(); i += 2) {
        if (std::find(pend.begin(), pend.end(), pairs[i]) == pend.end())
            pend.push_back(pairs[i]);
        if (std::find(main.begin(), main.end(), pairs[i + 1]) == main.end())
            main.push_back(pairs[i + 1]);
    }
}

std::vector<int> generateJacobsthal(int size) {
    std::vector<int> jacobsthal;
    if (size == 0)
        return jacobsthal;
    jacobsthal.push_back(0);
    if (size == 1)
        return jacobsthal;
    jacobsthal.push_back(1);

    for (int i = 2; i < size; i++) {
        jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i -2]);
    }
    return jacobsthal;
}

void binaryInsert(std::vector<int> &main, int element) {
    std::vector<int>::iterator position = std::lower_bound(main.begin(), main.end(), element);
    main.insert(position, element);
}

void insertPendIntoMain(std::vector<int> &main, const std::vector<int> &pend) {
    std::vector<int> jacobsthal = generateJacobsthal(pend.size());
    // std::vector<bool> inserted(pend.size(), false);
    std::unordered_set<int> used_indices;

    std::cout << "Jacobsthal sequence: ";
    for (size_t i = 0; i < jacobsthal.size(); i++) {
        std::cout << jacobsthal[i] << " ";
    }
    std::cout << std::endl;

    for (size_t index = 0; index < jacobsthal.size(); index++) {
        if (jacobsthal[index] >= static_cast<int>(pend.size()))
            continue;
        if (used_indices.find(jacobsthal[index]) == used_indices.end()) {
            std::cout << "Inserting " << pend[jacobsthal[index]] << " from pend into main.\n";
            binaryInsert(main, pend[jacobsthal[index]]);
            used_indices.insert(jacobsthal[index]);
        }
    }

    for (size_t i = 0; i < pend.size(); i++) {
        if (used_indices.find(i) == used_indices.end()) {
            std::cout << "Inserting remaining " << pend[i] << " into main.\n";
            binaryInsert(main, pend[i]);
            used_indices.insert(i);
        }
    }
}

void insertPendOddIntoMain(std::vector<int> &main, const std::vector<int> &pend, int oddElement) {
    // for (size_t i = 0; i < pend.size(); i++) {
    //     binaryInsert(main, pend[i]);
    // }
    // insertPendIntoMain(main, pend);
    (void)pend;

    if (oddElement != -1) {
        std::cout << "Inserting odd element " << oddElement << std::endl;
        binaryInsert(main, oddElement);
    }
}