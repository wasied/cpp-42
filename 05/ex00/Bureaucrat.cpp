#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &    Bureaucrat::operator=(Bureaucrat const & rhs)
{
    this->_grade = rhs.getGrade();
    this->_name = rhs.getName();
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