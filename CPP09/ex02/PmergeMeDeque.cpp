#include "PmergeMeDeque.hpp"

void printdeque(std::deque<int> &vec) {
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

int recursiveDividing(std::deque<int> &elements, std::deque<int> &pairs, int depth) {
 
    if(elements.size() < 2) {
        if (elements.size() == 1) {
            return elements[0];
        }
        return -1;
    }

    std::deque<int> nextElements;
    std::unordered_set<int> seen;

    for (size_t i = 0; i + 1 < elements.size(); i += 2) {
        int small = std::min(elements[i], elements[i + 1]);
        int large = std::max(elements[i], elements[i + 1]);

        pairs.push_back(small);
        nextElements.push_back(large);
    }
    if (elements.size() % 2 != 0)
        nextElements.push_back(elements.back());

    return recursiveDividing(nextElements, pairs, depth + 1);
}

void createSequences(const std::deque<int> &pairs, std::deque<int> &main, std::deque<int> &pend) {
    for (size_t i = 0; i < pairs.size(); i += 2) {
        main.push_back(pairs[i]);
        if (i + 1 < pairs.size())
            pend.push_back(pairs[i + 1]);
    }
    std::sort(main.begin(), main.end());
    std::sort(pend.begin(), pend.end());
}

std::deque<int> generateJacobsthal(int size) {
    std::deque<int> jacobsthal;
    if (size <= 0)
        return jacobsthal;
    jacobsthal.push_back(0);
    if (size == 1)
        return jacobsthal;
    jacobsthal.push_back(1);

    for (int i = 2; i < size; ++i) {
        int next = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
        if (next >= size)
            break;
        jacobsthal.push_back(next);
    }
    return jacobsthal;
}

void binaryInsert(std::deque<int> &main, int element) {
    if (std::find(main.begin(), main.end(), element) == main.end()) {
        std::deque<int>::iterator position = std::lower_bound(main.begin(), main.end(), element);
        main.insert(position, element);
    }
}

void insertPendIntoMain(std::deque<int> &main, const std::deque<int> &pend) {
    std::deque<int> jacobsthal = generateJacobsthal(static_cast<int>(pend.size()));
    std::unordered_set<int> insertedIndices;

    for (size_t index = 0; index < jacobsthal.size(); ++index) {
        int jacobIndex = jacobsthal[index];
        if (jacobIndex >= static_cast<int>(pend.size())) {
            std::cerr << "Jacobsthal index out of bounds: " << jacobsthal[index] << " >= " << pend.size() << std::endl;
            continue;
        }
        if (insertedIndices.find(jacobIndex) == insertedIndices.end()) {
            std::cout << "Inserting " << pend[jacobsthal[index]] << " from pend into main.\n";
            binaryInsert(main, pend[jacobsthal[index]]);
            insertedIndices.insert(jacobIndex);
        }
    }
    for (size_t i = 0; i < pend.size(); ++i) {
        if (insertedIndices.find(i) == insertedIndices.end()) {
            std::cout << "Inserting remaining " << pend[i] << " from pend into main.\n";
            binaryInsert(main, pend[i]);
        }
    }
}

void insertPendOddIntoMain(std::deque<int> &main, int oddElement) {
    if (oddElement != -1 && std::find(main.begin(), main.end(), oddElement) == main.end()) {
        std::cout << "Inserting odd element " << oddElement << std::endl;
        binaryInsert(main, oddElement);
    }
}