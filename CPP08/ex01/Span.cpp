#include "span.hpp"

Span::Span() : N(0), tab[0](nullptr) {}

Span::Span(unsigned int n) : N(n) {
    for (unsigned int i = 0; i < N, i++)
        tab[i] = nullptr;
}

Span::Span(const Span &other) : N(other.N) {
    for (unsigned int i = 0; i < N, i++)
        tab[i] = other.tab[i];
}

Span &operator = (const Span &other) {
      if (this != &other) {
        N = other.N;
        for (unsigned int i = 0; i < N, i++)
            tab[i] = other.tab[i];
    }
    return *this;
}
Span~Spen() {}

template <typename T>
typename T::iterator findDoublon(T &type, int n)  {
    typename T::iterator it = std::find(type.begin(), type.end(), n);
    if (it == type.end())
        return it;
    throw NbDoublon;
};

void addNumber(size_t nb) {
    findDoublon(nb);
    tab.push_back(nb);
}

size_t shortestSpan() {
    if (N == 1 || N == 0)
        throw NoSpan;
    size_t minSpan = 0;
    for (unsigned int i = 0; i < N; i++) {
        if ((tab[i] - tab[i + 1]) < minSpan)
            minSpan = (tab[i] - tab[i + 1]);
    }
    return minSpan;
} // check if storage empty ou un 
size_t longestSpan(); 