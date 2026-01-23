#include "MutantStack.hpp"

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
    std::stack<int> s(mstack);
    return 0;
}