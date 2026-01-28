#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include  <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack <T>
{
    public:
        //OCF
        MutantStack(void){}

        MutantStack(const MutantStack& other) : std::stack<T>(other){}

        MutantStack &operator=(const MutantStack &other)
        {
            std::stack<T>::operator=(other);
            return (*this);
        }
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator constIterator;

        iterator begin(void){return this->c.begin();}
        iterator end(void){return this->c.end();}
        constIterator begin(void) const {return this->c.cbegin();}
        constIterator end(void) const {return this->c.cend();}
};


#endif



