/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:18 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:19 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const f);
        Fixed(Fixed const &cpy);
        ~Fixed(void);

        Fixed&  operator=(const Fixed& rhs);

        Fixed   operator+(const Fixed& rhs) const;
        Fixed   operator-(const Fixed& rhs) const;
        Fixed   operator*(const Fixed& rhs) const;
        Fixed   operator/(const Fixed& rhs) const;
        Fixed&  operator++(void); // pre-increment
        Fixed   operator++(int); // post-increment
        Fixed&  operator--(void); // pre-decrement
        Fixed   operator--(int); // post-decrement

        bool    operator>(const Fixed& rhs) const;
        bool    operator<(const Fixed& rhs) const;
        bool    operator>=(const Fixed& rhs) const;
        bool    operator<=(const Fixed& rhs) const;
        bool    operator==(const Fixed& rhs) const;
        bool    operator!=(const Fixed& rhs) const;

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        
        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed&   min(Fixed& a, Fixed& b);
        static Fixed&   max(Fixed& a, Fixed& b);
        static Fixed const&   min(Fixed const& a, Fixed const& b);
        static Fixed const&   max(Fixed const& a, Fixed const& b);

    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif