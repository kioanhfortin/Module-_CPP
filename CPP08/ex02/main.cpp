#include "MutantStack.hpp"
#include <algorithm>
#include <vector>

int main() {

    std::cout << WHITE << "---- TEST BASE ----" << std::endl;
    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << LIME << "Top occurence: " << PINK << mstack.top() << std::endl;;

    mstack.pop();
    std::cout << LIME << "Stack size after pop: " << PINK << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << std::endl;

    std::cout << WHITE << "---- TEST ITERATOR ----" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    std::cout << LIME << "Occurence in MutantStack" << PINK << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    std::cout << WHITE << "---- TEST COPY DANS STD::STACK ----" << std::endl;
    std::stack<int> s(mstack);

    std::cout << LIME << "Occurence copie in std::stack reversed" << PINK << std::endl;
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl << std::endl;
    
    std::cout << WHITE << "---- TEST COMPATIBILITY WITH ALGO ----" << std::endl;
    std::vector<int> sortedElements(mstack.begin(), mstack.end());

    std::cout << LIME << "Sorted occurence from MutantStack: " << PINK << std::endl;
    for (std::vector<int>::const_iterator it = sortedElements.begin(); it != sortedElements.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << WHITE << "---- TEST MODIFY WITH ITERATOR ----" << std::endl;
    for (MutantStack<int>::iterator mod_it = mstack.begin(); mod_it != mstack.end(); mod_it++) {
        *mod_it *= 2;
    }

    std::cout << LIME << "Occurence after * 2" << PINK << std::endl;
    for (MutantStack<int>::iterator mod_it = mstack.begin(); mod_it != mstack.end(); mod_it++) {
        std::cout << *mod_it << " ";
    }
    std::cout << std::endl;

    return 0;
}