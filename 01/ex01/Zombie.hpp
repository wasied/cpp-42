/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:38 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:39 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define ZOMBIE_AMOUNTS 5

class Zombie {

    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);

        void    setName(std::string name);
        void    announce(void);

    private:
        std::string _name;

};

Zombie*    zombieHorde(int N, std::string name);

#endif