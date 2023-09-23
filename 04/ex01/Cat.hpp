/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:24 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 11:49:49 by mpeharpr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

    public:
        Cat(void);
        Cat(Cat const & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);

        void    makeSound(void) const;
        Brain   *getBrain(void) const;

    private:
        Brain*  _brain;

};

#endif