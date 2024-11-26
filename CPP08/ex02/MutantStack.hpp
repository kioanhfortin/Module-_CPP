#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class MutantStack : public std::stack<T> {
    public :
        MutantStack();
        MutantStack(size_t size);
        MutantStack(const MutantStack &other);
        MutantStack &operator = (const MutantStack &other);
        ~MutantStack();

        void        push(int n);
        typename T  pop();
        typename T  top();
        typename T  size();
        std::stack *begin();
        std::stack *end();

    private :
        std::vector data;
        size_t size_;
};

#endif