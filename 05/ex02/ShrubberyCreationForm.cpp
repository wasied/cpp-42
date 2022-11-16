#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &    ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    this->_target = rhs.getTarget();
    return *this;
}

std::string                ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void                        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::ofstream o_file;
        
        o_file.open(this->_target + "_shrubbery");

        o_file << "              v .   ._, |_  .," << std::endl;
        o_file << "           `-._\\/  .  \\ /    |/_" << std::endl;
        o_file << "               \\\\  _\\, y | \\\\" << std::endl;
        o_file << "         _\\_.___\\\\, \\/ -.\\||" << std::endl;
        o_file << "           `7-,--.`._||  / / ," << std::endl;
        o_file << "           /'     `-. `./ / |/_.'" << std::endl;
        o_file << "                     |    |//" << std::endl;
        o_file << "                     |_    /" << std::endl;
        o_file << "                     |-   |" << std::endl;
        o_file << "                     |   =|" << std::endl;
        o_file << "                     |    |" << std::endl;
        o_file << "--------------------/ ,  . \\--------._" << std::endl;

        o_file.close();
    }
}