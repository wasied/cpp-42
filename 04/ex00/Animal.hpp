/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:11 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:12 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const & src);
        virtual ~Animal();

        Animal & operator=(Animal const & rhs);

        virtual void    makeSound(void) const;
        std::string     getType(void) const;

    protected:
        std::string _type;

};

#endif