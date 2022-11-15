/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:06 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:07 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

    public:
        Fixed(void);
        Fixed(Fixed const &cpy);
        ~Fixed(void);

        Fixed&  operator=(const Fixed& rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

};


#endif