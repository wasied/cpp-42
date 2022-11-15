/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:45 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:46 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    return;
}

HumanB::~HumanB(void) {
    return;
}

void    HumanB::attack(void) const {
    std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
    return;
}