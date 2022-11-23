#include "iter.hpp"

template <typename T>
void    print(const T & t)
{
    std::cout << t << " ";
}

void    add_one(const int & i)
{
    const_cast<int &>(i)++;
}

int main()
{
    int array1[]            = {1, 2, 3, 4, 5};
    std::string array2[]    = {"Hello", "World", "!"};

    iter<int>(array1, 5, add_one);
    iter<int>(array1, 5, print);
    std::cout << std::endl;

    iter<std::string>(array2, 3, print);
    std::cout << std::endl;

    return 0;
}