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

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif