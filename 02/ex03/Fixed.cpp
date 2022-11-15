/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:24 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0)
{
}

Fixed::Fixed(int const n)
{
    this->_fixedPointValue = (n << _fractionalBits);
}

Fixed::Fixed(float const f)
{
    this->_fixedPointValue = (roundf(f * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &cpy)
{
    *this = cpy;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed sum;

    sum.setRawBits((*this).getRawBits() + rhs.getRawBits());
    return sum;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed diff;

    diff.setRawBits((*this).getRawBits() - rhs.getRawBits());
    return diff;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed prod;

    prod.setRawBits(((*this).getRawBits() * rhs.getRawBits()) >> _fractionalBits);
    return prod;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    Fixed div;

    div.setRawBits(((*this).getRawBits() << _fractionalBits) / rhs.getRawBits());
    return div;
}

Fixed& Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->_fixedPointValue++;
    return tmp;
}

Fixed& Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->_fixedPointValue--;
    return tmp;
}

Fixed::~Fixed(void)
{
}

int     Fixed::getRawBits() const
{
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return float(this->_fixedPointValue) / (1 << _fractionalBits);
}

int     Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
    o << fixed.toFloat();
    return o;
}

bool    Fixed::operator>(const Fixed& rhs) const
{
    return this->_fixedPointValue > rhs.getRawBits();
}

bool    Fixed::operator<(const Fixed& rhs) const
{
    return this->_fixedPointValue < rhs.getRawBits();
}

bool    Fixed::operator>=(const Fixed& rhs) const
{
    return this->_fixedPointValue >= rhs.getRawBits();
}

bool    Fixed::operator<=(const Fixed& rhs) const
{
    return this->_fixedPointValue <= rhs.getRawBits();
}

bool    Fixed::operator==(const Fixed& rhs) const
{
    return this->_fixedPointValue == rhs.getRawBits();
}

bool    Fixed::operator!=(const Fixed& rhs) const
{
    return this->_fixedPointValue != rhs.getRawBits();
}

Fixed&   Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

Fixed&   Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

Fixed const&   Fixed::min(Fixed const& a, Fixed const& b)
{
    return a < b ? a : b;
}

Fixed const&   Fixed::max(Fixed const& a, Fixed const& b)
{
    return a > b ? a : b;
}