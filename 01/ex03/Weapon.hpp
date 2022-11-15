/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:49 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:50 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

    public:
        Weapon(std::string type);
        ~Weapon(void);

        const std::string&  getType(void) const;
        void                setType(std::string type);

    private:
        std::string _type;

};

#endif