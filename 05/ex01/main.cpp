#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  joey("Joey", 20);
    Bureaucrat  dan("Dan", 5);

    Form        form1("Form1", 30, 1);
    Form        form2("Form2", 10, 1);

    std::cout << std::endl;
	std::cout << form1;
	std::cout << form2;
    std::cout << std::endl;

    try
    {
        Form        invalid1("Form3", 149, 0);
        Form        invalid2("Form3", 151, 1);
    }
    catch (std::exception& e)
    {
        std::cout << "Unable to create form because " << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        dan.signForm(form1);
        dan.signForm(form2);
    }
    catch (std::exception& e)
    {
        std::cout << "Unable to sign form because " << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        joey.signForm(form1);
        joey.signForm(form2);
    }
    catch (std::exception& e)
    {
        std::cout << "Unable to sign form because " << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << form1;
	std::cout << form2;
    std::cout << std::endl;

    return 0;
}