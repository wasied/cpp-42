#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "* Son d'animal inconnu * " << std::endl;
}