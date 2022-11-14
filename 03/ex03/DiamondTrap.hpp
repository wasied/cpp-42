#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap();

        DiamondTrap & operator=(DiamondTrap const & rhs);

        void    whoAmI(void);
        void    attack(std::string const & target);

    private:
        std::string _name;

};

#endif