/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:25 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:26 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point& cpy) : _x(cpy._x), _y(cpy._y)
{
}

Point::~Point(void)
{
}

Point&  Point::operator=(const Point& rhs)
{
    return *this;
}

Fixed   Point::getX(void) const
{
    return this->_x;
}

Fixed   Point::getY(void) const
{
    return this->_y;
}

std::ostream&   operator<<(std::ostream& os, const Point& rhs)
{
    os << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return os;
}