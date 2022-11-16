#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), _target(src.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &    RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    this->_target = rhs.getTarget();
    return *this;
}

std::string                RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void                        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "* unbearable drilling noises *" << std::endl;
        srand(time(0));
        if (rand() % 2)
            std::cout << this->_target << " has been robotomized successfully. Operation was successful." << std::endl;
        else
            std::cout << this->_target << " has not been robotomized successfully. Operation has failed." << std::endl;
    }
}