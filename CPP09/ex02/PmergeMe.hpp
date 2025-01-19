#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <stack>

class PmergeMe {
    public:
        PmergeMe() {}
        ~PmergeMe() {}
        std::vector<int> &getNumbers() { return numbers; }
        std::vector<int> &getPairs() { return pairs; }
        std::vector<int> &getMain() { return main; }
        std::vector<int> &getPend() { return pend; }
    private:
        std::vector<int> numbers;
        std::vector<int> pairs;
        std::vector<int> main;
        std::vector<int> pend;
};

void printDeque(std::deque<int> &vec);
void printVector(std::vector<int> &vec);

bool isNumber(const std::string &token);
void parsing(int argc, char **argv, PmergeMe &pm);
int iterativeDividing(std::vector<int> &elements, std::vector<int> &pairs);
int recursiveDividing(std::vector<int> &elements, std::vector<int> &pairs, int depth);
void createSequences(const std::vector<int> &pairs, std::vector<int> &main, std::vector<int> &pend);
void insertPendIntoMain(std::vector<int> &main, const std::vector<int> &pend);
void insertPendOddIntoMain(std::vector<int> &main, int oddElement);
void binaryInsert(std::vector<int> &main, int element);

#endif
