#include "Fixed.h"

Fixed::Fixed(void): nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Assignement operator called" << std::endl;
    if (this != &src)
    {
        this->nb = src.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->nb);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->nb = raw;
}