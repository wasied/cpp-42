/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:42 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:43 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();
    // AAnimal* ani = new AAnimal("Animal"); // Can not be done

    std::cout << std::endl << "=== Make sound for dog and cat ===" << std::endl;
    dog->makeSound();
    cat->makeSound();
    std::cout << std::endl;

    delete dog;
    delete cat;

    return (0);
}