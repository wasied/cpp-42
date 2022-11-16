#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  joey("Joey", 5);
    Bureaucrat  dan("Dan", 147);


    std::cout << std::endl << "===== First try -> Incrementing the grade =====" << std::endl;
    try
    {
        while (true)
        {
            std::cout << joey << std::endl;
            joey.incrementGrade();
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Unable to increment grade: " << e.what() << std::endl;
    }


    std::cout << std::endl << "===== Second try -> Decrementing the grade =====" << std::endl;
    try
    {
        while (true)
        {
            std::cout << dan << std::endl;
            dan.decrementGrade();
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Unable to increment grade: " << e.what() << std::endl;
    }
    std::cout << std::endl;


    return 0;
}