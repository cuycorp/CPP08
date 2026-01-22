#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include  <stack>

template <typename T>
class MutantStack: public std::stack
{
    private:
        std::stack<T> st;
    public:
        //OCF
        MutantStack(void);
        MutantStack(const MutantStack& other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

        //member functions of stack --> find out
        //add iterator as feature
        begin() const;
        end() const;

        /*
        1. use templates to define :
        iterator : *int, or any number storage, --> template <typename num>
        define template and then pointer to template
        2. change base constructor of stack to vector
        Stack = std::stack< Number, UnderlyingContainer>;
        */
};

#endif

