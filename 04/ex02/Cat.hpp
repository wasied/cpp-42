/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:39 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:40 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

    public:
        Cat(void);
        Cat(Cat const & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);

        void    makeSound(void) const;

    private:
        Brain*  _brain;

};

#endif