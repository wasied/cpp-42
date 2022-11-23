#include "Cast.hpp"

Cast::Cast(const std::string & value) : _value(value)
{
}

Cast::Cast(Cast const & src)
{
    *this = src;
}

Cast::~Cast()
{
}

Cast & Cast::operator=(Cast const & rhs)
{
    return *this;
}

const std::string & Cast::getValue() const
{
    return this->_value;
}

char Cast::toChar() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
        if (n < 0 || n > 255)
            throw Cast::ImpossibleCastException();
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    if (n < 32 || n > 126)
        throw Cast::NonDisplayableException();
    return static_cast<char>(n);
}

int Cast::toInt() const
{
    int n;

    try
    {
        n = std::stoi(this->_value);
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return n;
}

float Cast::toFloat() const
{
    float n;

    try
    {
        n = std::stof(this->_value);
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return n;
}

double Cast::toDouble() const
{
    double n;

    try
    {
        n = std::stod(this->_value);
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return n;
}

std::ostream & operator<<(std::ostream & o, Cast const & rhs)
{
    o << "char: ";
    try
    {
        const char c = rhs.toChar();
        o << "'" << c << "'" << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }

    o << "int: ";
    try
    {
        o << rhs.toInt() << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }

    o << "float: ";
    try
    {
        o << std::fixed << std::setprecision(1) << rhs.toFloat() << "f" << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }
    
    o << "double: ";
    try
    {
        o << std::fixed << std::setprecision(1) << rhs.toDouble() << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }
    return o;
}