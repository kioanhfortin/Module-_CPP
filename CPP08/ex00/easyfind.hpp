#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <string>

#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

class NothingFindException : public std::exception {
    public :
        const char *what(void) const throw() {
            return "No occurence found";
        }
};

template <typename T>
typename T::iterator easyfind(T &type, int n)  {
    typename T::iterator it = std::find(type.begin(), type.end(), n);
    if (it == type.end())
        throw NothingFindException();
    return it;
};


#endif