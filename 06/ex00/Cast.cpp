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
	std::cout << "Nothing to copy for Cast '" << &rhs << "'" << std::endl;
    return *this;
}

const std::string & Cast::getValue() const
{
    return this->_value;
}

bool Cast::isInputChar() const
{
	return (this->_value.length() == 1 && !std::isdigit(this->_value[0]));
}

char Cast::toChar() const
{
    int n;

    try
    {
        n = this->toInt();
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
    int 	n;
	float	f;
	float	inf;

    try
    {
		f = this->toFloat();
		n = static_cast<int>(f);

		inf = std::numeric_limits<float>::infinity();
		if (f == inf || f == -inf || std::isnan(f))
			throw std::exception();
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return n;
}

float Cast::toFloat() const
{
    float 	f;
	double	d;
	double	max;
	double	min;

    try
    {
		d = this->toDouble();
		f = static_cast<float>(d);

		max = static_cast<double>(std::numeric_limits<float>::max());
		min = static_cast<double>(std::numeric_limits<float>::min());

		if (d < min || d > max || std::isnan(d))
			throw std::exception();
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return f;
}

double Cast::toDouble() const
{
    double n;

    try
    {
		std::string			val = this->_value;

		if (this->isInputChar())
		{
			std::stringstream	tmpStream;
	
			tmpStream << static_cast<int>(this->_value[0]);
			val = tmpStream.str();
		}

        n = std::stod(val);
    }
    catch (std::exception & e)
    {
        throw Cast::ImpossibleCastException();
    }
    return n;
}

int	Cast::getDecimalCount() const
{
	double				d = this->toDouble();

	std::stringstream	ss;
	ss << d;
	std::string			str = ss.str();

	std::size_t			pos = str.find('.');
	if (pos == std::string::npos)
		return (0);
	return str.substr(pos + 1).length();
}

std::ostream & operator<<(std::ostream & o, Cast const & rhs)
{
	int	decCount = rhs.getDecimalCount();
	if (decCount <= 0)
		decCount = 1;

	std::cout << std::fixed << std::setprecision(decCount);

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
        o << rhs.toFloat() << "f" << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }
    
    o << "double: ";
    try
    {
        o << rhs.toDouble() << std::endl;
    }
    catch (std::exception & e)
    {
        o << e.what() << std::endl;
    }
    return o;
}