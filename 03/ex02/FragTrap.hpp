#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();

        FragTrap & operator=(FragTrap const & rhs);

        void    highFivesGuys(void);

};

#endif