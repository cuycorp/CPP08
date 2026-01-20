
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "easyfind.hpp"
#include <exception> 

int main()
{
    // ---------- VECTOR ----------
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::cout << "Vector tests\n";
    try {
        std::cout << std::boolalpha << ft_easyfind(v, 2) ;
        std::cout << " succeded in finding 2 \n";
        std::cout << ft_easyfind(v, 5) << " (expected 0)\n";
        std::cout << "succeded in finding 5 \n";
    }
    catch (std::exception &e)
    {
        std::cout << "Caught error: " << e.what() << std::endl;
    }

    
    // ---------- LIST ----------
    std::list<int> l;
    l.push_back(10);
    l.push_back(20);

    std::cout << "\nList tests\n";
    try
    {
        std::cout << std::boolalpha << ft_easyfind(l, 10);
        std::cout << " succeded in finding 10 \n";
        std::cout << std::boolalpha << ft_easyfind(l, 30);
        std::cout << " succeded in finding 30 \n";
    }
    catch (std::exception &e)
    {
        std::cout << "Caught error: " << e.what() << std::endl;
    }
    // ---------- DEQUE ----------
    std::deque<int> d;
    d.push_back(7);
    d.push_back(8);
    d.push_back(9);


    std::cout << "\nDeque tests\n";
    try 
    {
        std::cout << std::boolalpha <<  ft_easyfind(d, 8) ;
        std::cout << " succeded in finding 8 \n";
        std::cout << std::boolalpha <<  ft_easyfind(d, 1) ;
        std::cout << " succeded in finding 1 \n";
    }
    catch (std::exception &e)
    {
        std::cout << "Caught error: " << e.what() << std::endl;
    }
    // ---------- SET ----------
    std::set<int> s;
    s.insert(42);
    s.insert(100);

    std::cout << "\nSet tests\n";
    try 
    {
        std::cout << std::boolalpha << ft_easyfind(s, 42) ;
        std::cout << " succeded in finding 42 \n";
        std::cout << std::boolalpha << ft_easyfind(s, 5) ;
        std::cout << " succeded in finding 5 \n";
    }
    catch (std::exception &e)
    {
        std::cout << "Caught error: " << e.what() << std::endl;
    }
    // ---------- EMPTY ----------
    std::vector<int> empty;

    std::cout << "\nEmpty container test\n";
    try
    {
    std::cout << std::boolalpha <<  ft_easyfind(empty, 1) ;
    std::cout << "succeded in finding 1\n";
    }
    catch (std::exception &e)
    {
        std::cout << "Caught error: " << e.what() << std::endl;
    }
    
    return 0;
}