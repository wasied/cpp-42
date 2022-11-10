#include "Point.hpp"

/* 
Check if point is inside the triangle created by a-b-c with Fixed precision
If the point is on the edge of the triangle, it is considered outside
*/
bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   ab = (b.getY() - a.getY()) * (point.getX() - a.getX()) - (b.getX() - a.getX()) * (point.getY() - a.getY());
    Fixed   bc = (c.getY() - b.getY()) * (point.getX() - b.getX()) - (c.getX() - b.getX()) * (point.getY() - b.getY());
    Fixed   ca = (a.getY() - c.getY()) * (point.getX() - c.getX()) - (a.getX() - c.getX()) * (point.getY() - c.getY());

    return (ab >= 0 && bc >= 0 && ca >= 0) || (ab <= 0 && bc <= 0 && ca <= 0);
}