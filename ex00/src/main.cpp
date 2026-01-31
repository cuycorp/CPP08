
/* for stdout */
#include <iostream>
/* for ostringstream*/
#include <sstream>
/* for ontainers*/
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "easyfind.hpp"\

/*for exception*/
#include <exception> 

/* colors */
#define RESET   "\033[0m"
#define PINK    "\033[35m"
#define MAGENTA  "\033[0;35m"
#define RED     "\033[0;31m"
#define GREEN       "\033[0;32m"


/**
    @brief Macro for testing, it prints a text depending of a logic condition 
*/

#define ASSERT_TEST(expectedResultCondition, expectedResultMessage) \
	if (expectedResultCondition) \
        { std::cout << GREEN << "[TEST PASSED]" << RESET << " " << expectedResultMessage << std::endl; } \
	else \
        { std::cout << RED << "[TEST FAILED]" << RESET << " " << expectedResultMessage << std::endl; }


/**
    @brief function template to convert any type to string
*/
template <typename T>
std::string toString(T value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

/**
    @brief function template that execute a function that handles exception and displays
            the error, if catched.
*/
template <typename containerT>
void ft_test(const containerT& container, int elem)
{
    bool result = true;
    std::string message = "looking for " + toString(elem);

    std::string errorMsg;
    try 
    {
        result = ft_easyfind(container, elem);
    }
    catch (std::exception &e)
    {
        result = false;
        errorMsg = e.what();
    }
    ASSERT_TEST(result, message);
    if (!result)
        std::cout << "Caught error: " << errorMsg << std::endl;
}


int main()
{
    
    // ---------- VECTOR ----------
    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                                 VECTOR                                      */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;
    
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    ft_test(v, 2);
    ft_test(v, 5);
    

    // ---------- LIST ----------
    std::list<int> l;
    l.push_back(10);
    l.push_back(20);

    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
    std::cout << PINK << "/*                                 LISTS                                  */" << RESET << std::endl;
    std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;

    ft_test(l, 10);
    ft_test(l, 5 );



    // ---------- SET ----------
    std::set<int> s;
    s.insert(42);
    s.insert(100);

    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                                 SET                                  */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;;

    ft_test(s, 42);
    ft_test(s, 101);
    // ---------- EMPTY ----------
    std::vector<int> empty;

    std::cout << PINK << "\n/* ************************************************************************** */" << RESET << std ::endl;
	std::cout << PINK << "/*                                 EMPTY CONTAINER                             */" << RESET << std::endl;
	std::cout << PINK << "/* ************************************************************************** */" << RESET << std ::endl;
    
    ft_test(empty, 1);
    return 0;
}

