/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:24 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 14:36:06 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	if (this->_brain)
		delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
	
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

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}