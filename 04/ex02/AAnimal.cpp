/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:35 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 14:29:00 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    std::cout << "AAnimal assignation operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}