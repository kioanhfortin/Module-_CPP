#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

class Array {

public :
    template <typename T>
    T();
    T(int n);
    T(const T &other);
    T &operator = (const T &other);
    ~T();

    class InvalidIndex : public std::exception {
        public:
            const char *what(void) const throw();
    };

    void size();
    
private :

};


#endif;