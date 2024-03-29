/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 14:35:58 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
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

	if (this->_brain)
		delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
	
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaouw" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->_brain);
}