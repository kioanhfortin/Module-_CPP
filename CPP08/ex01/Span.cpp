#include "Span.hpp"

Span::Span() : N(0), tab() {}

Span::Span(unsigned int n) : N(n), tab(n, 0) {}

Span::Span(const Span &other) : N(other.N) {
    for (unsigned int i = 0; i < N; i++)
        tab[i] = other.tab[i];
}

Span &Span::operator = (const Span &other) {
      if (this != &other) {
        N = other.N;
        for (unsigned int i = 0; i < other.N; i++)
            tab[i] = other.tab[i];
    }
    return *this;
}
Span::~Span() { 
    // for (size_t i = 0; i < N; i++) {
    //     delete tab[i];
    // }
}

void Span::addNumber(unsigned int nb) {
    Span::findDoublon(tab, nb);
    tab.push_back(nb);
}

size_t Span::shortestSpan() {
    if (N == 1 || N == 0)
        throw NoSpan();
    int minSpan = 0;
    for (unsigned int i = 0; i < N; i++) {
        if ((tab[i] - tab[i + 1]) < minSpan)
            minSpan = (tab[i] - tab[i + 1]);
    }
    return minSpan;
}

size_t Span::longestSpan() {
     if (N == 1 || N == 0)
        throw NoSpan();
    int maxSpan = 0;
    for (unsigned int i = 0; i < N; i++) {
        if ((tab[i] - tab[i + 1]) > maxSpan)
            maxSpan = (tab[i] - tab[i + 1]);
    }
    return maxSpan;
}


std::ostream &operator << (std::ostream &out, const Span &other) {
    std::vector<int> tab = other.get_tab();
    for (size_t i = 0; i < tab.size(); i++) {
        out << LIME << "Tab [" << i << "] : " << PINK << tab[i] << WHITE << "\n";
    }
    return out;
}