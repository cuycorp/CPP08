#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>

template <typename containerT>

class Span
{
    private:
        unsigned int _N;
        containerT cont;
    public:
        Span(int unsigned N);
        ~Span();
        //member functions
        addNumber(const int n); //check if n is t
        int shortestSpan(void) const;
        int longestSpan(void) const; //no numbers c.size
        void addFromContainer(containerT::iterator begin, containerT::iterator end);
        //getters and setters
};

#endif

