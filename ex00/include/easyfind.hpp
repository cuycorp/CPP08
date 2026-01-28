#ifndef EASYFIND_HPP
#define EASYFIND_HPP
/* for find() */
#include <algorithm>
/* for exception */
#include <exception>


template < typename containerT> 
bool ft_easyfind(containerT container, int elem)
{
    if (std::find(container.begin(), container.end(), elem) != container.end())
    {
        std::
        return (true);
    }
    else
        throw std::runtime_error("No element found!");
}

#endif
