#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top value is " << mstack.top() << std::endl;
    mstack.pop();

    std::cout << "Current size of " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << std::endl << "Stack contains:" << std::endl;

    while (it != ite)
    {
        std::cout << "- " << *it << std::endl;
        ++it;
    }
    std::cout << "Current size: " << mstack.size() << std::endl;


    std::stack<int> s(mstack);

    std::cout << std::endl << "Stack s contains:" << std::endl;
    while (!s.empty())
    {
        std::cout << "- " << s.top() << std::endl;
        s.pop();
    }
    std::cout << "Current size: " << s.size() << std::endl;

    return 0;
}