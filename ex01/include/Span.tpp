#include "Span.hpp"
#include <algorithm>

// Default constructor
Span::Span(int unsigned N) : _N(N), _nElements(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Destructor
Span::~Span(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

//member functions

void Span::addNumber(const int &n)//check if n is t
{
    if (getCap() < getN())
    {
        v.push_back(n);
        setCap(_nElements + 1);
    }
    else 
        throw std::runtime_error("No more space, all elements have been added !");
}

template < typename containerIterator>
void Span::addNumber(containerIterator begin, containerIterator end)
{
    for (containerIterator it = begin; it!= end; it++)
    {
        if (getCap() < getN())
        {
            v.push_back(*it);
            setCap(_nElements + 1);
        }
        else
            throw std::runtime_error("No more space, all elements have been added !");
    }
}

int Span::shortestSpan(void) const
{
    std::vector<int> copy(v);
    std::sort(copy.begin(), copy.end());
    int range = *(copy.begin() + 1) - *(copy.begin());
    return (range);
}

int Span::longestSpan(void) const //no numbers c.size
{
    std::vector<int> copy(v);
    std::sort(copy.begin(), copy.end());
    int range = *(copy.end() - 1) - *(copy.begin());
    return (range);
}

//getters and setters
unsigned int Span::getN(void) const
{
    return (_N);
}

unsigned int Span::getCap(void) const
{
    return (_nElements);
}

void Span::setCap(unsigned int nElements)
{
    _nElements = nElements;
}