#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
# include <sstream>

class Cast
{
    public:
        Cast(const std::string & value);
        Cast(Cast const & src);
        ~Cast();

        Cast &		operator=(Cast const & rhs);

		bool				isInputChar() const;
		int					getDecimalCount() const;

        const std::string & getValue() const;
        char		        toChar() const;
        int		            toInt() const;
        float		        toFloat() const;
        double		        toDouble() const;

        class ImpossibleCastException : public std::exception
        {
            const char *what() const throw()
            {
                return "impossible";
            }
        };

        class NonDisplayableException : public std::exception
        {
            const char *what() const throw()
            {
                return "Non displayable";
            }
        };

    private:
        const std::string    _value;

};

std::ostream &	operator<<(std::ostream & o, Cast const & rhs);

#endif