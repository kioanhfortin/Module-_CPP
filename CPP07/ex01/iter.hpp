#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

template <typename T, typename F>
void    iter(T* tab, size_t size, F fnct) {
    for (size_t i = 0; i < size; i++){
        fnct(tab[i]);
    }
}

#endif