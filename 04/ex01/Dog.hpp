/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaxit <maaxit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:25 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 11:49:49 by maaxit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog();

        Dog & operator=(Dog const & rhs);

        void    makeSound(void) const;
        Brain   *getBrain(void) const;

    private:
        Brain*  _brain;

};

#endif