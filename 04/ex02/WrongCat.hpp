/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:46 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:23:47 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

    public:
        WrongCat(void);
        WrongCat(WrongCat const & src);
        ~WrongCat();

        WrongCat & operator=(WrongCat const & rhs);

        void    makeSound(void) const;

};

#endif