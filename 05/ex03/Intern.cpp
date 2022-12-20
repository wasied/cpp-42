#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}

Intern &    Intern::operator=(Intern const & rhs)
{
	std::cout << "Nothing to copy for Intern '" << &rhs << "'" << std::endl;
    return *this;
}

AForm *     Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[] = {"robotomy request", "presidential pardo", "shrubbery creation"};
    AForm*      forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    AForm*      formRet = NULL;

    for (int i = 0; i < 3; i++)
    {
        if (!formRet && formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            formRet = forms[i];
        }
        else
            delete forms[i];
    }

    if (!formRet)
        std::cout << "Intern can't create " << formName << " because it does not exists" << std::endl;
    return formRet;
}