#include "MutantStack.hpp"

#define RESET   "\033[0m"
#define PINK    "\033[35m"
#define RED     "\033[31m"



int main()
{
    MutantStack<int>  mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Current stack top: " << mstack.top() << std::endl;
    mstack.pop();
    
    std::cout << "Current stack size: "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "Beggining element: " << *it << std::endl;
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Ending element: " << *(ite--) << std::endl;
    ++it;
    --it;
    std::cout << "Current stack size: "<< mstack.size() << std::endl;
    std::cout << "Printing stack elements: "<< mstack.size() << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Current stack top: " << mstack.top() << std::endl;

    
    
    //Copy constructor
    std::cout << PINK <<"\nTesting deep copy of copy constructor" << RESET << std::endl;

    MutantStack<int> copy(mstack);
    copy.pop();

    std::cout << "Original size: " << mstack.size() << std::endl;
    std::cout << "Copy size: " << copy.size() << std::endl;

    std::cout << PINK <<"\nTesting deep copy of assigment constructor" << RESET << std::endl;
    
    MutantStack<int> assign;
    assign = mstack;
    assign.pop();

    std::cout << "Original size: " << mstack.size() << std::endl;
    std::cout << "Assigned size: " << assign.size() << std::endl;

    return 0;
}

/*
#include <vector>
int main()
{

    std::vector<int>  mstack;
    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << "Current stack top: " << mstack.back() << std::endl;
    mstack.pop_back();
    
    std::cout << "Current stack size: "<< mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    
    std::vector<int>::iterator it = mstack.begin();
    std::cout << "Beggining element: " << *it << std::endl;
    std::vector<int>::iterator ite = mstack.end();
    std::cout << "Ending element: " << *(ite--) << std::endl;
    ++it;
    --it;
    std::cout << "Current stack size: "<< mstack.size() << std::endl;
    std::cout << "Printing stack elements: "<< mstack.size() << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Current stack top: " << mstack.back() << std::endl;
}

*/