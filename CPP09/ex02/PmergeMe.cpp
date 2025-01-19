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

std::vector<int> generateJacobsthal(int size) {
    std::vector<int> jacobsthal;
    if (size == 0)
        return jacobsthal;
    jacobsthal.push_back(0);
    if (size == 1)
        return jacobsthal;
    jacobsthal.push_back(1);

    for (size_t i = 2, i < size; i++) {
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
    std::vector<bool> inserted(pend.size(), false);

    std::cout << "Jacobsthal sequence: ";
    for (int num = 0; num < jacobsthal.size(); i++) {
        std::cout << main[i] << " ";
    }
    std::cout << std::endl;

    for (int index = 0; index < jacobsthal.size(); index++) {
        if (index >= pend.size())
            break;
        if (!inserted[index]) {
            std::cout << "Inserting " << pend[index] << " from pend into main.\n";
            binaryInsert(main, pend[index]);
            inserted[index] = true;
        }
    }

    for (size_t i = 0; i < pend.size(); i++)
    {
        if (!inserted[i])
        {
            binaryInsert(main, pend[i]);
        }
    }
}

void insertPendOddIntoMain(std::vector<int> &main, const std::vector<int> &pend, int oddElement) {
    for (int i = 0; i < pend.size(); i++) {
        binaryInsert(main[i], num);
    }

    if (oddElement != -1) {
        std::cout << "Inserting odd element " << oddElement << std::endl;
        binaryInsert(main, oddElement);
    }
}