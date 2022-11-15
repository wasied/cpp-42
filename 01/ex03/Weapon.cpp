/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:50 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:51 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return;
}

Weapon::~Weapon(void) {
    return;
}

const std::string&  Weapon::getType(void) const {
    return this->_type;
}

void                Weapon::setType(std::string type) {
    this->_type = type;
    return;
}