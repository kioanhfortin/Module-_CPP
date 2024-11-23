#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <type_traits>

template <typename T>
class Array {

public :
    Array() : data(nullptr), size_(0) {}

    Array(size_t n) : size_(n) {
        if (n < 0)
            data = new T[size_];
    }

    Array(const Array &other) : size_(other.size_){
        data = new T[size_];
        for (size_t i = 0; i < size_; i ++) {
            data[i] = other.data[i];
        }
    }

    T &operator = (const T &other) {
        if (this != &other) {
            delete[] data;
            size_ = other.size_;
            data = new T[size_];
            for (size_t i = 0; i < size_; i ++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
    
    ~Array() {
        delete[] data;
    }


    size_t size() const { return size_; }

  T &operator [] (size_t index) {
        if (index > size_)
            throw InvalidIndex();
        return data[index];
    }

    const T &operator [] (size_t index) const {
        if (index > size_)
            throw InvalidIndex();
        return data[index];
    }

    class InvalidIndex : public std::exception {
        public:
            const char *what(void) const throw();
    };
    
private :
    T *data;
    size_t size_;
};

#endif