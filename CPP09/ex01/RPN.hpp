#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>

class RPN {
    public:
        RPN() {}
        ~RPN() {}
        std::stack<int> &getStack() { return stack; }
       
    private:
        std::stack<int> stack;
};

bool getResult(std::string str, RPN &rpn);

#endif
