#include "Form.hpp"

Form::Form(std::string name, unsigned int minGradeToSign, unsigned int minGradeToExecute) : _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
    if (minGradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (minGradeToSign > 150)
        throw Form::GradeTooLowException();
    if (minGradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (minGradeToExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form created" << std::endl;
}

Form::Form(Form const & src) : _minGradeToSign(src.getGradeToSign()), _minGradeToExecute(src.getGradeToExecute())
{
    *this = src;
}

Form::~Form()
{
    std::cout << "Form destroyed" << std::endl;
}

Form &    Form::operator=(Form const & rhs)
{
    std::cout << "Since name is const, can't overwrite it" << std::endl;
    this->_signed = rhs.getSigned();
    return *this;
}

std::string     Form::getName() const
{
    return this->_name;
}

bool            Form::getSigned() const
{
    return this->_signed;
}

unsigned int    Form::getGradeToSign() const
{
    return this->_minGradeToSign;
}

unsigned int    Form::getGradeToExecute() const
{
    return this->_minGradeToExecute;
}

void            Form::beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() > this->_minGradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &  operator<<(std::ostream & o, Form const & i)
{
    o << "Form '" << i.getName() << "' (" << (i.getSigned() ? "signed" : "unsigned") << ") requires a grade of " << i.getGradeToSign() << " to sign and a grade of " << i.getGradeToExecute() << " to execute." << std::endl;
    return o;
}