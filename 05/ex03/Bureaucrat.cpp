#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat &    Bureaucrat::operator=(Bureaucrat const & rhs)
{
    this->_name = rhs.getName();
    this->_grade = rhs.getGrade();
    return *this;
}

std::string     Bureaucrat::getName() const
{
    return this->_name;
}

unsigned int    Bureaucrat::getGrade() const
{
    return this->_grade;
}

void        Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void        Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void        Bureaucrat::signForm(AForm & form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Specified grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Specified grade is too low";
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i)
{
    o << i.getName() << ", bureaucrat grade " << i.getGrade();
    return o;
}