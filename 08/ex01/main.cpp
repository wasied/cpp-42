#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);

        std::cout << std::endl;
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;


        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        try
        {
            sp.addNumber(55);
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << "Minimum span is " << sp.shortestSpan() << std::endl;
        std::cout << "Maximum span is " << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }

    // Trying to fill with a range of iterators
    {
        std::vector<int>    v;
        v.push_back(3);
        v.push_back(17);
        v.push_back(9);
        v.push_back(11);
        v.push_back(55);

        Span sp = Span(5);
        sp.addNumber(v.begin(), v.end());
        std::cout << "Minimum span is " << sp.shortestSpan() << std::endl;
    }

    // Trying a lot of numbers
    {
        Span sp = Span(50000);

        for (int i = 0; i < 50000; i++)
            sp.addNumber(i * 2);

        std::cout << std::endl;
        std::cout << "Minimum span is " << sp.shortestSpan() << std::endl;
        std::cout << "Maximum span is " << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}