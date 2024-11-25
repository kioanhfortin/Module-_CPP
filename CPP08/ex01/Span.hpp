#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

class Span {

    public :
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator = (const Span &other);
        ~Span();

        // template <typename T>
        
        // typename T::iterator findDoublon(T &type, int n)  {
        //     typename T::iterator it = std::find(type.begin(), type.end(), n);
        //     if (it == type.end())
        //         return it;
        //     throw NbDoublon();
        // };

        void addNumber(int nb); // check if doublon already store
        int shortestSpan() const; // check if storage empty ou un 
        int longestSpan() const; // check if storage empty ou un    

        std::vector<int> get_tab() const { return tab; }
        unsigned int     get_size() const { return N; }

        class NoSpan : public std::exception {
            public : 
                const char * what() throw() {
                    return "Not enough occurence to hane a span";
                }
        };

        class NbDoublon : public std::exception {
            public : 
                const char * what() throw() {
                    return "This occurence is double";
                }
        };
    private :
        unsigned int N;
        std::vector<int> tab;
        Span();
};

std::ostream &operator << (std::ostream &out, const Span &other);

#endif