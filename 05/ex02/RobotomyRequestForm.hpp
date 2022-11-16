#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

    public: 
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();

        RobotomyRequestForm &    operator=(RobotomyRequestForm const & rhs);

        std::string                 getTarget() const;
        void                        execute(Bureaucrat const & executor) const;

    private:
        std::string                 _target;

};

#endif