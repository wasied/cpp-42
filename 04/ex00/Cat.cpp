#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    return ;
}

Cat::Cat(Cat const & src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaouw" << std::endl;
}