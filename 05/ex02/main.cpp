#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    const std::string red("\033[0;31m");
    const std::string green("\033[1;32m");
    const std::string yellow("\033[1;33m");
    const std::string cyan("\033[0;36m");
    const std::string magenta("\033[0;35m");
    const std::string reset("\033[0m");

    Bureaucrat  superadmin("Super-Admin", 1);
    Bureaucrat  admin("Admin", 20);
    Bureaucrat  moderator("Moderator", 80);
    Bureaucrat  user("User", 150);

    std::cout << std::endl << red << "===== List of bureaucrats =====" << std::endl;
    std::cout << superadmin << std::endl;
    std::cout << admin << std::endl;
    std::cout << moderator << std::endl;
    std::cout << user << std::endl;
    std::cout << "===== List of bureaucrats =====" << std::endl << reset << std::endl;

    PresidentialPardonForm    pardon("McAfee");
    RobotomyRequestForm       robotomy("Neo");
    ShrubberyCreationForm     shrubbery("Weird");

    std::cout << std::endl << green << "===== Trying to sign pardon =====" << std::endl;
    user.signForm(pardon);
    moderator.signForm(pardon);
    admin.signForm(pardon);
    superadmin.signForm(pardon);
    std::cout <<  "===== Trying to sign pardon =====" << std::endl << reset << std::endl;

    std::cout << yellow << "===== Trying to sign robotomy =====" << std::endl;
    user.signForm(robotomy);
    moderator.signForm(robotomy);
    admin.signForm(robotomy);
    superadmin.signForm(robotomy);
    std::cout <<  "===== Trying to sign robotomy =====" << std::endl << reset << std::endl;

    std::cout << cyan << "===== Trying to sign shrubbery =====" << std::endl;
    user.signForm(shrubbery);
    moderator.signForm(shrubbery);
    admin.signForm(shrubbery);
    superadmin.signForm(shrubbery);
    std::cout <<  "===== Trying to sign shrubbery =====" << std::endl << reset << std::endl;

    ///////////////////

    std::cout << std::endl << magenta << "===== Trying to execute pardon =====" << std::endl;
    user.executeForm(pardon);
    moderator.executeForm(pardon);
    admin.executeForm(pardon);
    superadmin.executeForm(pardon);
    std::cout <<  "===== Trying to execute pardon =====" << std::endl << reset << std::endl;

    std::cout << green << "===== Trying to execute robotomy =====" << std::endl;
    user.executeForm(robotomy);
    moderator.executeForm(robotomy);
    admin.executeForm(robotomy);
    superadmin.executeForm(robotomy);
    std::cout <<  "===== Trying to execute robotomy =====" << std::endl << reset << std::endl;

    std::cout << red << "===== Trying to execute shrubbery =====" << std::endl;
    user.executeForm(shrubbery);
    moderator.executeForm(shrubbery);
    admin.executeForm(shrubbery);
    superadmin.executeForm(shrubbery);
    std::cout <<  "===== Trying to execute shrubbery =====" << std::endl << reset << std::endl;

    return 0;
}