#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &    PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    this->_target = rhs.getTarget();
    return *this;
}

std::string                PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void                        PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}