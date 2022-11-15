/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:35 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:36 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie(void);

        void    announce(void);

    private:
        std::string _name;

};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif