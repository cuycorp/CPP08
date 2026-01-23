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

        MutantStack(const MutantStack& other)
        {
            std::cout << "Copy constructor called" << std::endl;
            (void) other;
            return ;
        }

        MutantStack &operator=(const MutantStack &other)
        {
            std::cout << "Assignment operator called" << std::endl;
            (void) other;
            return (*this);
        }
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void){return this->c.begin();}
        iterator end(void){return this->c.end();}


};


#endif

