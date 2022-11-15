/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:46 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:47 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);

        void    attack(void) const;

    private:
        std::string _name;
        Weapon&     _weapon;

};

#endif