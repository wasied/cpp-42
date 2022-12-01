#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

    public:
        Bureaucrat(std::string name, unsigned int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();

        Bureaucrat &    operator=(Bureaucrat const & rhs);

        std::string     getName() const;
        unsigned int    getGrade() const;

        void            incrementGrade();
        void            decrementGrade();

        void            signForm(Form & form);

    private:
        const std::string     	_name;
        unsigned int    		_grade;

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

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i);

#endif