#include "MutantStack.hpp"

// Default constructor
MutantStack::MutantStack(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
MutantStack::MutantStack(const MutantStack &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
MutantStack &MutantStack::operator=(const MutantStack &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
MutantStack::~MutantStack(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

