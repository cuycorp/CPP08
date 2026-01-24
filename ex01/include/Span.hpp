#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span 
{
    private:
        std::vector<int> v;
        unsigned int _N;
        unsigned int _nElements;

    public:
        Span(int unsigned N);
        ~Span();

        //member functions
        void addNumber(const int &n); 
        template < typename containerIterator>
        void addNumber(containerIterator begin, containerIterator end);

        int shortestSpan(void) const;
        int longestSpan(void) const; 

        //getters and setters
        unsigned int getN(void) const;
        unsigned int getCap(void) const;
        void setCap(unsigned int nElements);
};

#include "Span.tpp"
#endif

