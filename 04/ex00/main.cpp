/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:15 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:16 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << std::endl;

        std::cout << "Type: '" << j->getType() << "' " << std::endl;
        std::cout << "Type: '" << i->getType() << "' " << std::endl;
        std::cout << "Type: '" << meta->getType() << "' " << std::endl;

        std::cout << std::endl;

        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        std::cout << std::endl;

        delete meta;
        delete j;
        delete i;
    }

    std::cout << std::endl << "=== NOW WITH WRONG ANIMAL ===" << std::endl << std::endl;

    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << std::endl;

        std::cout << "Type: '" << i->getType() << "' " << std::endl;
        std::cout << "Type: '" << meta->getType() << "' " << std::endl;

        std::cout << std::endl;

        i->makeSound();
        meta->makeSound();

        std::cout << std::endl;

        delete meta;
        delete i;
    }

    return (0);
}