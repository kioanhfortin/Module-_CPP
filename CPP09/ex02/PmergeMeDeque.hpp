#ifndef PMERGEMEDEQUE_HPP
#define PMERGEMEDEQUE_HPP

#include <string>
#include <iostream>
#include <deque>
#include <deque>
#include <unordered_set>
#include <algorithm>
#include <stack>

class PmergeMe {
    public:
        PmergeMe() {}
        ~PmergeMe() {}
        std::deque<int> &getNumbers() { return numbers; }
        std::deque<int> &getPairs() { return pairs; }
        std::deque<int> &getMain() { return main; }
        std::deque<int> &getPend() { return pend; }
    private:
        std::deque<int> numbers;
        std::deque<int> pairs;
        std::deque<int> main;
        std::deque<int> pend;
};

void printDeque(std::deque<int> &vec);
void printdeque(std::deque<int> &vec);

bool isNumber(const std::string &token);
void parsing(int argc, char **argv, PmergeMe &pm);
int iterativeDividing(std::deque<int> &elements, std::deque<int> &pairs);
int recursiveDividing(std::deque<int> &elements, std::deque<int> &pairs, int depth);
void createSequences(const std::deque<int> &pairs, std::deque<int> &main, std::deque<int> &pend);
void insertPendIntoMain(std::deque<int> &main, const std::deque<int> &pend);
void insertPendOddIntoMain(std::deque<int> &main, int oddElement);
void binaryInsert(std::deque<int> &main, int element);

#endif
