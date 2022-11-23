#include "whatever.hpp"
#include <iostream>

int main()
{
    // WITH INTEGERS
    int a = 2;
    int b = 3;
    ::swap<int>(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min(a, b) = " << ::min<int>(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max<int>(a, b) << std::endl << std::endl;
    
    // WITH STRINGS
    std::string c = "string1";
    std::string d = "string2";
    ::swap<std::string>(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min(c, d) = " << ::min<std::string>(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max<std::string>(c, d) << std::endl << std::endl;
    
    // WITH FLOATS
    float e = 2.5;
    float f = 3.5;
    ::swap<float>(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;

    std::cout << "min(e, f) = " << ::min<float>(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max<float>(e, f) << std::endl << std::endl;

    // WITH CHARACTERS
    char g = 'a';
    char h = 'b';
    ::swap<char>(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    
    std::cout << "min(g, h) = " << ::min<char>(g, h) << std::endl;
    std::cout << "max(g, h) = " << ::max<char>(g, h) << std::endl;

    return 0;
}