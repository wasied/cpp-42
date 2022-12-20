#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat  jhon("Jhon", 50);
    Bureaucrat  emma("Emma", 2);
    Intern      someRandomIntern;
    AForm*      someForm;

    std::cout << std::endl << "===== Creating a robotomy request =====" << std::endl;
    someForm = someRandomIntern.makeForm("presidential pardon", "Bender");
    
	if (someForm)
		std::cout << "===== Creating a robotomy request =====" << std::endl;
	else
	{
		std::cout << "===== Error creating a robotomy request =====" << std::endl << std::endl;
		return (0);
	}

    std::cout << std::endl << "===== Signing and executing it =====" << std::endl;
    jhon.signForm(*someForm);
    jhon.executeForm(*someForm);

    std::cout << std::endl;
    emma.executeForm(*someForm);
    std::cout << "===== Signing and executing it =====" << std::endl;

    std::cout << std::endl;
    delete someForm;

    return 0;
}