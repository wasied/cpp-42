/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:41 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:42 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    a("Jhon Smith");
    ClapTrap    b("Rawid Jeremy");
    ScavTrap    c("Makouli Moukoukou");

    b = c;

    std::cout << std::endl;

    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("Rawid Jeremy");

    std::cout << std::endl;

    b.attack("Jhon Smith");
    b.beRepaired(3);

    std::cout << std::endl;

    c.beRepaired(5);
    for (int i = 0; i < 3; i++)
        c.attack("the whole world");
    c.beRepaired(5);
    c.guardGate();
    c.beRepaired(10);

    std::cout << std::endl;
    return (0);
}