/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:05 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:06 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap   diamond("Jean");

    // ClapTrap member functions
    std::cout << std::endl;
    diamond.attack("someone");
    diamond.takeDamage(10);
    diamond.beRepaired(5);

    // ScavTrap member function
    std::cout << std::endl;
    diamond.guardGate();

    // FragTrap member function
    std::cout << std::endl;
    diamond.highFivesGuys();

    // DiamondTrap member function
    std::cout << std::endl;
    diamond.whoAmI();

    std::cout << std::endl;
    return (0);
}