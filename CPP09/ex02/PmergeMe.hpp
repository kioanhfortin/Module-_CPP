#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <deque>
#include <vector>
#include <unordered_set>

struct Pair 
{
    int a; //smallest
    int b; //largest

    Pair (int x, int y) {
        if (a < b) {
            a = x;
            b = y;
        } else {
            a = y;
            b = x;
        }
    }
};

class PmergeMe {
    public:
        PmergeMe() {}
        ~PmergeMe() {}
        std::vector<int> &getNumbers() { return numbers; }
        std::vector<Pair> &getPairs() { return pairs; }
        std::vector<int> &getMain() { return main; }
        std::vector<int> &getPend() { return pend; }
    private:
        std::vector<int> numbers;
        std::vector<Pair> pairs;
        std::vector<int> main;
        std::vector<int> pend;
};


void parsing(int argc, char **argv, PmergeMe &pm);
void recursiveDividing(std::vector<int>& elements, std::vector<Pair>& pairs);
void createSequences(const std::vector<Pair> &pairs, std::vector<int> &main, std::vector<int> &pend);
void insertPendIntoMain(std::vector<int> &main, const std::vector<int> &pend);
void insertPendOddIntoMain(std::vector<int> &main, const std::vector<int> &pend, int oddElement);

#endif
