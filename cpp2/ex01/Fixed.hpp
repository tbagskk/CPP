#include <iostream>
#include <cmath>
class Fixed
{
    private : 

        int _nb;
        static const int _fractionalBits = 8;

    public :

        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();

        int getRawBits(void)const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int   toInt(void)const;

        Fixed(const Fixed& cpy);
        Fixed &operator=(const Fixed &src);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);