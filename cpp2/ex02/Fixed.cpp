/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:08:27 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 13:08:27 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0)
{
    //std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const &cpy)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::Fixed(int const nb) : _nb(nb << _fractionalBits) 
{
    //std::cout << "Int constructor called" << std::endl;  
    return;
}
/*on utilise le décalage vers la gauche pour convertir value en virgule fixe. Cela correspond a 2^8 = 256 
    et on stocke le resultat dans la variable nb*/



Fixed::Fixed(float const nb) : _nb(static_cast<int>(roundf(nb * (1 << _fractionalBits ) ))) 
{
    //std::cout << "Float constructor called" << std::endl; 
    return;
}   
/*Roundf est utilisé pour arrondir value au nbr entier le plus proche 
    Ensuite on multiplie value par 2^fracrionnalbit pour le convertir en virgule fixe
    Puis on convertis le résultat en entier à l'aide de static_cast<int> et on stocke la valeur convertie dans nb*/


Fixed &Fixed::operator=(const Fixed &src)
{
   // std::cout << "Assignement operator called" << std::endl;
    if (this != &src)
    {
        this->_nb = src.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void)const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_nb = raw;
}

float Fixed::toFloat(void)const
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->_nb >> _fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}
/* opérateur << surchargé pour la classe fixed, i.toFloat pour convertir l'objet fixed en virgule flottante avec la fonction définie avant
la valeur en virgule flottante est insérée dans le flux de sortie o avec <<
*/

bool    Fixed::operator>(const Fixed& other) const
{
    return (this->toFloat() > other.toFloat());
}

bool    Fixed::operator<(const Fixed& other) const
{
    return (this->toFloat() < other.toFloat());
}

bool    Fixed::operator>=(const Fixed& other) const
{
    return (this->toFloat() >= other.toFloat());
}

bool    Fixed::operator<=(const Fixed& other) const
{
    return (this->toFloat() <= other.toFloat());
}

bool    Fixed::operator==(const Fixed& other) const
{
    return (this->toFloat() == other.toFloat());
}

bool    Fixed::operator!=(const Fixed& other) const
{
    return (this->toFloat() != other.toFloat());
}



Fixed   Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-(const Fixed& other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator/(const Fixed& other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed   Fixed::operator*(const Fixed& other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}


Fixed   &Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed&	Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++( int value )
{
	Fixed i(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (i);
}

Fixed	Fixed::operator--( int value )
{
	Fixed i(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (i);
}




Fixed const	&Fixed::min( Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const	&Fixed::max( Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}