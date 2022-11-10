#include "Fixed.hpp"
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point   a(0, 0);
    Point   b(3, 3);
    Point   c(-3, 3);

    Point   point1(1.5, 1.5);
    Point   point2(2.9, 2.9);
    Point   point3(-3, 2.99);
    Point   point4(4, 1);

    std::cout << std::endl << "--- First test -> Success ---" << std::endl;
    std::cout << "Is point " << point1 << " inside the triangle: " << (bsp(a, b, c, point1) ? "Yes" : "No") << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl << "--- Second test -> Success ---" << std::endl;
    std::cout << "Is point " << point2 << " inside the triangle: " << (bsp(a, b, c, point2) ? "Yes" : "No") << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl << "--- Third test -> Failure ---" << std::endl;
    std::cout << "Is point " << point3 << " inside the triangle: " << (bsp(a, b, c, point3) ? "Yes" : "No") << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << std::endl << "--- Fourth test -> Failure ---" << std::endl;
    std::cout << "Is point " << point4 << " inside the triangle: " << (bsp(a, b, c, point4) ? "Yes" : "No") << std::endl;
    std::cout << "-----------------------------" << std::endl << std::endl;

    return (0);
}