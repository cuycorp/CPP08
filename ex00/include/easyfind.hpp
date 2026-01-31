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


/*
from: 
bool ft_easyfind(containerT container, int elem)
to:
bool ft_easyfind(const containerT& container, int elem)
to avoid copying 

...
containerT container (by value): copy of container is made, function works on the copy
containerT& container (non-const reference): direct access to original container, to modify
const containerT container (const copy): read only copy 
const containerT& container: non read and non copy 
*/