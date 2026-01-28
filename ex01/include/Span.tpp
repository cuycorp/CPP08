#include "Span.hpp"
/*for sort*/
#include <algorithm>
/*for int limits*/
#include <limits.h>

//OCD
Span::Span(int unsigned N) : _N(N)
{
    //std::cout << "Default constructor called" << std::endl;
    return ;
}

Span::Span(const Span& other): v(other.v),_N(other._N)
{
    return ;
}

Span & Span::operator=(const Span &other)
{
    if (this != &other)
    {
        v = other.v;
        _N = other._N;
    }
    return (*this);
}

Span::~Span(void)
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}


//Member functions
void Span::addNumber(const int &n)
{
    if (v.size() < getN())
        v.push_back(n);
    else 
        throw std::runtime_error("No more space, all elements have been added !");
}

template < typename containerIterator>
void Span::addNumber(containerIterator begin, containerIterator end)
{
    for (containerIterator it = begin; it!= end; it++)
    {
        if (v.size() < getN())
            v.push_back(*it);
        else
            throw std::runtime_error("No more space, all elements have been added !");
    }
}

int Span::shortestSpan(void) const
{
    if (v.size() == 0 || v.size() == 1)
    {
        throw std::runtime_error("No valid range value!");
    }
    else
    {
        std::vector<int> copy(v);
        std::sort(copy.begin(), copy.end());
        int range = *(copy.begin() + 1) - *(copy.begin());
        return (range);
    }
}

int Span::longestSpan(void) const //no numbers c.size
{
    if (v.size() == 0 || v.size() == 1)
    {
        throw std::runtime_error("No valid range value!");
    }
    else
    {
        std::vector<int> copy(v);
        std::sort(copy.begin(), copy.end());
        int range = *(copy.end() - 1) - *(copy.begin());
        return (range);
    }
}

//getters and setters
unsigned int Span::getN(void) const
{
    return (_N);
}
