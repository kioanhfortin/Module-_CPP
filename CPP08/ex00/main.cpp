#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>

int main() {
    std::cout << WHITE << "---- TEST : VECTOR ----" << std::endl;

    int vector[] = {1, 2, 3, 4, 5};
    std::vector<int> tab(vector, vector + 5);
    try {
        // std::vector<int>::iterator it = easyfind(tab, 30);
        std::vector<int>::iterator it = easyfind(tab, 3);
        std::cout << LIME << "Ocurrence found: " << PINK << *it << WHITE << std::endl;

    } catch ( std::exception &e ) {
        std::cerr << PINK << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << WHITE << "---- TEST : LIST ----" << std::endl;

    int list[] = {1, 2, 3, 4, 5};
    std::list<int> tab1(list, list + 5);
    try {
        // std::list<int>::iterator it = easyfind(tab1, 55);
        std::list<int>::iterator it = easyfind(tab1, 5);
        std::cout << LIME << "Ocurrence found: " << PINK << *it << WHITE << std::endl;

    } catch ( std::exception &e ) {
        std::cerr << PINK << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << WHITE << "---- TEST : DEQUE ----" << std::endl;

    int deque[] = {1, 2, 3, 4, 5};
    std::deque<int> tab2(deque, deque + 5);
    try {
        // std::deque<int>::iterator it = easyfind(tab1, 11);
        std::deque<int>::iterator it = easyfind(tab2, 1);
        std::cout << LIME << "Ocurrence found: " << PINK << *it << WHITE << std::endl;

    } catch ( std::exception &e ) {
        std::cerr << PINK << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << WHITE << "---- TEST : SET ----" << std::endl;

    int set[] = {1, 2, 3, 4, 5};
    std::set<int> tab3(set, set + 5);
    try {
        std::set<int>::iterator it = easyfind(tab3, 11);
        // std::set<int>::iterator it = easyfind(tab3, 1);
        std::cout << LIME << "Ocurrence found: " << PINK << *it << WHITE << std::endl;

    } catch ( std::exception &e ) {
        std::cerr << PINK << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}