#include "RPN.hpp"

bool isOperator(const std::string &token) {
    if (token == "+" || token == "-" || token == "*" || token == "/")
        return true;
    return false;
}

bool isNumber(const std::string &token) {
    if (token.empty())
        return false;
    size_t i = 0;
    if (token[0] == '-') {
        if (token.size() == 1) {
            return false;
        }
        i = 1;
    }
    for (; i < token.size(); i++) {
        if (!std::isdigit(token[i]))
            return false;
    }
    return true;
}

bool getResult(std::string expression, RPN &rpn) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if(isNumber(token)) {
            rpn.getStack().push(stof(token));
        } else if (isOperator(token)) {
            if (rpn.getStack().size() < 2) {
                std::cerr << "Error: Not enough number for operator " << token << std::endl;
                return false;
            }

            int operand2 = rpn.getStack().top();
            rpn.getStack().pop();
            int operand1 = rpn.getStack().top();
            rpn.getStack().pop();

            if (token == "+")
                rpn.getStack().push(operand1 + operand2);
            else if (token == "-")
                rpn.getStack().push(operand1 - operand2);
            else if (token == "*")
                rpn.getStack().push(operand1 * operand2);
            else if (token == "/") {
                if (operand2 == 0) {
                    std::cerr << "Error: Division by zero." << std::endl;
                    return false;
                }
                rpn.getStack().push(operand1 / operand2);
            }
        } else {
            std::cerr << "Error"<< std::endl;
            return false;
        }
    }
    if (rpn.getStack().size() != 1) {
        std::cerr << "Error: Invalid Expression. Stack size: " << rpn.getStack().size() << std::endl;
        return false;
    }
    return true;
}