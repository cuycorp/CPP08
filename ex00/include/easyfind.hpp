#ifndef EASYFIND_HPP
#define EASYFIND_HPP
/* for find() */
#include <algorithm>
/* for exception */
#include <exception>

/**
    @brief Function template to search for an element inside any int container
*/
template < typename containerT> 
bool ft_easyfind(const containerT& container, int elem)
{
    if (std::find(container.begin(), container.end(), elem) != container.end())
        return (true);
    else
        throw std::runtime_error("No element found!");
}

#endif

