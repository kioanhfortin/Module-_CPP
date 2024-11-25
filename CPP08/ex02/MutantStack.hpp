#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class MutantStack : {
    public :
        MutantStack();
        MutantStack(size_t size);
        MutantStack(const MutantStack &other);
        MutantStack &operator = (const MutantStack &other);
        ~MutantStack();

        void        push(int n);
        typename T  top();
        typename T  size();
        std::stack *begin();
        std::stack *end();

    private :
        std::stack stack;
        size_t size_;
};

#endif