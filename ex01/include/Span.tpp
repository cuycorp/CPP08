#include "Span.hpp"
/*for sort*/
#include <algorithm>
/*for int limits*/
#include <limits>

//OCD
Span::Span(int unsigned N) : _N(N)
{
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
    return ;
}

//Member functions
void Span::addNumber(const int &n)
{
    if (v.size() < getN())
        v.push_back(n);
    else if(n > std::numeric_limits<int>::max())
        throw std::runtime_error("Cannot add element outside with number outside of int range ");
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
        else if(*it > std::numeric_limits<int>::max())
            throw std::runtime_error("Cannot add element outside with number outside of int range !");
        else
            throw std::runtime_error("No more space, all elements have been added !");
    }
}

int Span::shortestSpan(void) const
{
    int min_span = std::numeric_limits<int>::max();
    int span = 0;
    if (v.size() == 0 || v.size() == 1)
    {
        throw std::runtime_error("Not enough elements to give span value!");
    }
    else
    {
        for (size_t i = 0; i < v.size() - 1; i++)
        {
            std::cout << "v[i  + 1]: " << v[i  + 1] << std::endl;
            std::cout << "v[i ]: " << v[i  + 1] << std::endl;
            span = v[i  + 1] - v[i];
            if (span < min_span)
                min_span = span;
            
        }
        return (min_span);
    }
}

int Span::longestSpan(void) const 
{
    if (v.size() == 0 || v.size() == 1)
    {
        throw std::runtime_error("Not enough elements to give span value!");
    }
    else
    {
        std::vector<int> copy(v);
        std::sort(copy.begin(), copy.end());
        int range = *(copy.end() - 1) - *(copy.begin());
        return (range);
    }
}

unsigned int Span::getN(void) const
{
    return (_N);
}
