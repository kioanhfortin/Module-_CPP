#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>

class PmergeMe {
    public:
        PmergeMe() {}
        ~PmergeMe() {}
        std::vector<int> &getNumbers() { return numbers; }

    private:
        std::vector<int> numbers;
};

void parsing(int argc, char **argv, PmergeMe &pm);

#endif
