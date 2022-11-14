#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    a("Jhon Smith");
    ClapTrap    b("Rawid Jeremy");
    ScavTrap   c("Makouli Moukoukou");

    std::cout << std::endl;

    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("Rawid Jeremy");

    std::cout << std::endl;

    b.attack("Jhon Smith");
    b.beRepaired(3);

    std::cout << std::endl;

    c.beRepaired(5);
    for (int i = 0; i < 3; i++)
        c.attack("the whole world");
    c.beRepaired(5);
    c.guardGate();
    c.beRepaired(10);

    std::cout << std::endl;
    return (0);
}