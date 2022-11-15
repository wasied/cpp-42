/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:51 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:52 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    clap("Clap");
    ScavTrap    scav("Scav");
    FragTrap    frag("Frag");

    std::cout << std::endl;

    clap.attack("Scav");
    clap.takeDamage(10);
    clap.beRepaired(5);

    std::cout << std::endl;

    scav.attack("Frag");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    std::cout << std::endl;

    frag.attack("Clap");
    frag.takeDamage(10);
    frag.beRepaired(5);
    frag.highFivesGuys();

    std::cout << std::endl;
    return (0);
}