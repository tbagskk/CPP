#include <iostream>

class Fixed
{
    private : 

        int nb;
        static const int bit;

    public :

        Fixed();
        ~Fixed();

        int getRawBits(void)const;
        void setRawBits(int const raw);

        Fixed(const Fixed& cpy);
        Fixed &operator=(const Fixed &src);
};