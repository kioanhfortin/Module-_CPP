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

        void addNumber(int nb);
        int shortestSpan() const;
        int longestSpan() const;

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