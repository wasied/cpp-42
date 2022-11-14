#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
    return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
    return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouaf" << std::endl;
}