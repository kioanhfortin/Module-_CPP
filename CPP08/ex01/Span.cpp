#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &other) : N(other.N), tab(other.tab) {}

Span &Span::operator = (const Span &other) {
      if (this != &other) {
        N = other.N;
        tab = other.tab;
    }
    return *this;
}
Span::~Span() {}

void Span::addNumber(int nb) {
    if (tab.size() >= N)
        throw std::out_of_range("Vector if full");
    std::vector<int>::iterator it = std::find(tab.begin(), tab.end(), nb);
    if (it != tab.end())
        throw NbDoublon();
    tab.push_back(nb);
}

int Span::shortestSpan() const {
    if (N == 1 || N == 0)
        throw NoSpan();
    std::vector<int> sortedTab = tab;
    std::sort(sortedTab.begin(), sortedTab.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sortedTab.size() - 1; i++) {
        if ((sortedTab[i + 1] - sortedTab[i]) < minSpan)
            minSpan = (sortedTab[i + 1] - sortedTab[i]);
    }
    return minSpan;
}

int Span::longestSpan() const {
     if (N == 1 || N == 0)
        throw NoSpan();
    std::vector<int> sortedTab = tab;
    std::sort(sortedTab.begin(), sortedTab.end());
    int maxSpan = sortedTab[sortedTab.size() - 1] - sortedTab[0];
    return maxSpan;
}

std::ostream &operator << (std::ostream &out, const Span &other) {
    std::vector<int> tab = other.get_tab();
    for (unsigned int i = 0; i < tab.size(); i++) {
        out << LIME << "Tab [" << i << "] : " << PINK << tab[i] << WHITE << "\n";
    }
    return out;
}

const char *Span::NoSpan::what() const throw() {
    return "Not enough occurence to hane a span";
}

const char *Span::NbDoublon::what() const throw() {
    return "This occurence is double";
}