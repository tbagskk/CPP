#include <iostream>

class Fixed
{
    private : 

        int nb;
        static const int bit;

    public :

        Fixed();
        Fixed(int const value);
        Fixed(int const value);
        ~Fixed();

        int getRawBits(void)const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int   toInt(void)const;

        Fixed(const Fixed& cpy);
        Fixed &operator=(const Fixed &src);
};