#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();

        Bureaucrat &    operator=(Bureaucrat const & rhs);

        std::string     getName() const;
        unsigned int    getGrade() const;

        void        incrementGrade();
        void        decrementGrade();

    private:
        std::string     _name;
        unsigned int    _grade;

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