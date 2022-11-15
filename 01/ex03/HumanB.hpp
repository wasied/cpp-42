/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:47 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:48 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    attack(void) const;
        void    setWeapon(Weapon& weapon);

    private:
        std::string _name;
        Weapon*     _weapon;

};

#endif