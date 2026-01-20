#include "Span.hpp"

// Default constructor
Span::Span(int unsigned N) : _N(N)
{
    std::cout << "Default constructor called" << std::endl;
    //how to initialize container generically
    /*
    generalizze 
    int arr[] = {1, 2, 3, 4};

    std::vector<int> v(arr, arr + 4);
    std::list<int>   l(arr, arr + 4);
    std::set<int>    s(arr, arr + 4);

    */
    return ;
}

// Destructor
Span::~Span(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

//member functions
addNumber(const int n)
{

}
int shortestSpan(void) const
{}
int longestSpan(void) const
{}
void addFromContainer(containerT::iterator begin, containerT::iterator end)
{}