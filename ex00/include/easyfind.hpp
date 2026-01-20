#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>


template < typename containerT> 
bool ft_easyfind(containerT container, int elem)
{
    if (std::find(container.begin(), container.end(), elem) != container.end())
        return (true);
    else
        throw std::runtime_error("No element found!");
}

#endif
