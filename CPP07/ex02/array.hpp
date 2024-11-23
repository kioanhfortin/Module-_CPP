#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <ostream>
#include <type_traits>

class InvalidIndex : public std::exception {
    public:
        const char *what(void) const throw() {
            return "Invalid index accessed";
        };
};

template <typename T>
class Array {

public :
    Array() : data(nullptr), size_(0) {}

    Array(size_t n) : size_(n) {
        data = new T[size_];
    }

    Array(const Array &other) : size_(other.size_){
        data = new T[size_];
        for (size_t i = 0; i < size_; i ++) {
            data[i] = other.data[i];
        }
    }

    Array &operator = (const Array &other) {
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

    T *get_data() const { return data; }

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

    
private :
    T *data;
    size_t size_;
};

template <typename T>
std::ostream &operator << (std::ostream &out, const Array<T> &other) {
    for (size_t i = 0; i < other.size(); i++) {
        out << "Data " << i << ": " << other[i] << "\n";
    }
    return out;
}

#endif