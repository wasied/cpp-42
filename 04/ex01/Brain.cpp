/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:22 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 14:37:51 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
    return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
		return NULL;
    return (this->_ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
		return;
    this->_ideas[i] = idea;
}

std::ostream & operator<<(std::ostream & o, Brain const & rhs)
{
    o << "Brain ideas:" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (rhs.getIdea(i) != "")
            o << "Idea " << i << ": " << rhs.getIdea(i) << std::endl;
    }
    return (o);
}