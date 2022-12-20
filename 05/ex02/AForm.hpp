#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

    public:
        AForm(std::string name, unsigned int minGradeToSign, unsigned int minGradeToExecute);
        AForm(AForm const & src);
        virtual ~AForm();

        AForm &    operator=(AForm const & rhs);

        std::string         getName() const;
        bool                getSigned() const;
        unsigned int  getGradeToSign() const;
        unsigned int  getGradeToExecute() const;

        void                beSigned(Bureaucrat const & bureaucrat);

        virtual void        execute(Bureaucrat const & executor) const = 0;

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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        const std::string       _name;
        bool                    _signed;
        const unsigned int      _minGradeToSign;
        const unsigned int      _minGradeToExecute;

};

std::ostream &  operator<<(std::ostream & o, AForm const & i);

#endif