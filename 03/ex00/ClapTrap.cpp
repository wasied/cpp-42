#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, can't attack" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, can't be repaired" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}