#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat  jhon("Jhon", 50);
    Bureaucrat  emma("Emma", 2);
    Intern      someRandomIntern;
    AForm*      rrf;

    std::cout << std::endl << "===== Creating a robotomy request =====" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << "===== Creating a robotomy request =====" << std::endl;

    std::cout << std::endl << "===== Signing and executing it =====" << std::endl;
    jhon.signForm(*rrf);
    jhon.executeForm(*rrf);

    std::cout << std::endl;
    emma.executeForm(*rrf);
    std::cout << "===== Signing and executing it =====" << std::endl;

    std::cout << std::endl;
    delete rrf;

    return 0;
}