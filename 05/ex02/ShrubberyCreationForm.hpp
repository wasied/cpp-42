#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

    public: 
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &    operator=(ShrubberyCreationForm const & rhs);

        std::string                 getTarget() const;
        void                        execute(Bureaucrat const & executor) const;

    private:
        std::string                 _target;

};

#endif