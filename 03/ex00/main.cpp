/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:37 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:38 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    a("Jhon Smith");
    ClapTrap    b("Rawid Jeremy");

    std::cout << std::endl;

    a.attack("Rawid Jeremy");
    a.takeDamage(10);
    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("Rawid Jeremy");

    std::cout << std::endl;

    b.beRepaired(3);
    b.attack("Jhon Smith");
    b.attack("Jhon Smith");
    b.attack("Jhon Smith");
    b.beRepaired(3);

    std::cout << std::endl;
    return (0);
}