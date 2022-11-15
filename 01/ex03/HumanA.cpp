/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:44 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:45 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA(void) {
    return;
}

void    HumanA::attack(void) const {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
    return;
}