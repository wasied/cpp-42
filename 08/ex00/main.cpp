#include "easyfind.hpp"

int main()
{
    std::list<int> lst;
    lst.push_back(4242);
    lst.push_back(2424);
    lst.push_back(4224);
    lst.push_back(2442);

    std::vector<int> vec;
    vec.push_back(4242);
    vec.push_back(2424);
    vec.push_back(4224);
    vec.push_back(2442);

    std::cout << "List: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Vector: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    try
    {
        std::cout << "Find 3 in list: " << *easyfind(lst, 3) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << "Find 3 in vector: " << *easyfind(vec, 4224) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}