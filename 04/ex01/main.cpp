/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:26 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:27 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* animals[10];

    std::cout << std::endl << "...Creating 10 animals..." << std::endl;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "...10 animals created..." << std::endl;

    std::cout << std::endl << "Getting the type of every animal" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << animals[i]->getType() << ":" << "\t";
        animals[i]->makeSound();
    }

    std::cout << std::endl << "...Clearing 10 animals..." << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << "...10 animals cleared..." << std::endl;

    return (0);
}