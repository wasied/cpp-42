/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:32 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:33 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[]) {

    std::cout << std::endl << "Creating a zombie (Zombo) on the stack..." << std::endl;

    std::cout << "========================================" << std::endl;
    Zombie *zombie = newZombie("Zombo");
    zombie->announce();
    delete zombie;
    std::cout << "========================================" << std::endl << std::endl;

    std::cout << "Creating a zombie (Zomba) on the heap..." << std::endl;

    std::cout << "========================================" << std::endl;
    randomChump("Zomba");
    std::cout << "========================================" << std::endl << std::endl;

    return (0);
}