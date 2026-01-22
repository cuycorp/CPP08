#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>

class MutantStack
{
    public:
        MutantStack(void);
        MutantStack(const MutantStack& other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();
};

#endif

