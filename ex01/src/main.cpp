#include "Span.hpp"
#include "vector"
#include <cstdlib> // for rand()
#include <ctime>   // for time()

#define RESET   "\033[0m"
#define PINK    "\033[35m"
#define RED     "\033[31m"


int main()
{
    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*            Testing addNumber, which adds element by element                  */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;
    Span sp = Span(5);
    try 
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: "<< sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Caught: " << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;



    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*        Testing addNumber, which adds element from container                */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;
    int arr[] = {0, 23, 1, 5};
    std::vector<int> va(arr, arr + 4);
    std::cout << "printing test vector: " << std::endl;
    for (std::vector<int>::iterator i = va.begin(); i!=va.end(); i++)
      std::cout <<  *i << " ";
    std::cout << std::endl;
    Span sp1(3);
    
    try 
    {
        sp1.addNumber(va.begin(), va.end());
        std::cout << "shortest span: " << sp1.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp1.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Caught: " << e.what() << RESET<< std::endl;
    }
    std::cout << "Elements added: ";
    sp1.printAllMembers();
    std::cout << std::endl;




    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                      Testing Span with 20,000 random numbers                */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;
    std::srand(std::time(NULL));
    const int LARGE_SIZE = 30000;
    Span spLarge(20000);
    try
    {
        for (int i = 0; i < LARGE_SIZE; ++i)
            spLarge.addNumber(std::rand()); // add random numbers
        std::cout << "Shortest span: " << spLarge.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spLarge.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Caught: " << e.what() << RESET << std::endl;
    }
    std::cout << "Span size: " << spLarge.getSizeVector();
    std::cout << std::endl;

    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                             Testing range for 1 element                     */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;
    Span spanOne = Span(1);
    try 
    {
        std::cout << "Shortest span: " << spanOne.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanOne.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Caught: " << e.what() << RESET << std::endl;
    }
    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                            Testing range for 0 elements                     */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;
    Span spanZero = Span(0);
    try 
    {
        std::cout << "Shortest span: " << spanZero.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanZero.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << RED << "Caught: " << e.what() << RESET << std::endl;
    }
return 0;
}