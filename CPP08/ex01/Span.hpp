#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {

    public :
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator = (const Span &other);
        ~Spen();

        void addNumber(size_t nb); // check if doublon already store
        size_t shortestSpan(); // check if storage empty ou un 
        size_t longestSpan(); // check if storage empty ou un 

        struct NoSpan : public std::exception {
            public : 
                const char * what() throw() {
                    return "Not enough occurence to hane a span";
                }
        }

        struct NbDoublon : public std::exception {
            public : 
                const char * what() throw() {
                    return "Not enough occurence to hane a span";
                }
        }
    private :
        unsigned int N;
        vector<int> tab;
        Span();
};

#endif