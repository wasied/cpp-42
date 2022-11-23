#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base*   generate(void)
{
    int     random = rand() % 3;

    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch (std::exception& e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main(void)
{
    srand(time(NULL));

    Base*   base1 = generate();
    Base*   base2 = generate();
    Base*   base3 = generate();

    std::cout << std::endl << "Generated base1 is of type: " << std::endl;
    identify(base1);
    identify(*base1);

    std::cout << std::endl << "Generated base2 is of type: " << std::endl;
    identify(base2);
    identify(*base2);

    std::cout << std::endl << "Generated base3 is of type: " << std::endl;
    identify(base3);
    identify(*base3);
    std::cout << std::endl;

    delete base1;
    delete base2;
    delete base3;
    return 0;
}