#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

    public:
        Form(std::string name, unsigned int minGradeToSign, unsigned int minGradeToExecute);
        Form(Form const & src);
        ~Form();

        Form &    operator=(Form const & rhs);

        std::string         getName() const;
        bool                getSigned() const;
        const unsigned int  getGradeToSign() const;
        const unsigned int  getGradeToExecute() const;

        void                beSigned(Bureaucrat const & bureaucrat);

    private:
        std::string             _name;
        bool                    _signed;
        const unsigned int      _minGradeToSign;
        const unsigned int      _minGradeToExecute;

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};

std::ostream &  operator<<(std::ostream & o, Form const & i);

#endif