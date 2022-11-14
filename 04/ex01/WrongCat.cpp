#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;
}