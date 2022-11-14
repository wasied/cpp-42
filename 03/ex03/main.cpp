#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap   diamond("Jean");

    // ClapTrap member functions
    std::cout << std::endl;
    diamond.attack("someone");
    diamond.takeDamage(10);
    diamond.beRepaired(5);

    // ScavTrap member function
    std::cout << std::endl;
    diamond.guardGate();

    // FragTrap member function
    std::cout << std::endl;
    diamond.highFivesGuys();

    // DiamondTrap member function
    std::cout << std::endl;
    diamond.whoAmI();

    std::cout << std::endl;
    return (0);
}