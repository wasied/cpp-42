/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:38 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:39 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
    std::cout << "Zombie '" << this->_name << "' created" << std::endl;
}

Zombie::Zombie(void) {
    this->_name = "Unknown";
    std::cout << "Zombie '" << this->_name << "' created" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie '" << this->_name << "' destroyed" << std::endl;
}

void    Zombie::setName(std::string name) {
    std::cout << "Zombie '" << this->_name << "' has been renamed to '" << name << "'" << std::endl;
    this->_name = name;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}