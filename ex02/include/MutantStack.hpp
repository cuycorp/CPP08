#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include  <stack>
class MutantStack
{
    public:
        MutantStack(void);
        MutantStack(const MutantStack& other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

    //member functions of stack --> find out
    //add iterator as feature
};

#endif

