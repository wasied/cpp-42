#include "AForm.hpp"

AForm::AForm(std::string name, unsigned int minGradeToSign, unsigned int minGradeToExecute) : _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
    if (minGradeToSign < 1)
        throw AForm::GradeTooHighException();
    else if (minGradeToSign > 150)
        throw AForm::GradeTooLowException();
    if (minGradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (minGradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src) : _minGradeToSign(src.getGradeToSign()), _minGradeToExecute(src.getGradeToExecute())
{
    *this = src;
}

AForm::~AForm()
{
}

AForm &    AForm::operator=(AForm const & rhs)
{
    std::cout << "Since name is const, can't overwrite it" << std::endl;
    this->_signed = rhs.getSigned();
    return *this;
}

std::string     AForm::getName() const
{
    return this->_name;
}

bool            AForm::getSigned() const
{
    return this->_signed;
}

const unsigned int    AForm::getGradeToSign() const
{
    return this->_minGradeToSign;
}

const unsigned int    AForm::getGradeToExecute() const
{
    return this->_minGradeToExecute;
}

void            AForm::beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() > this->_minGradeToSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}

std::ostream &  operator<<(std::ostream & o, AForm const & i)
{
    o << "AForm '" << i.getName() << "' (" << (i.getSigned() ? "signé" : "non-signé") << ") requires a grade of " << i.getGradeToSign() << " to sign and a grade of " << i.getGradeToExecute() << " to execute." << std::endl;
    return o;
}