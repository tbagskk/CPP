/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:08:41 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 13:08:41 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP



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

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        /*
            const Fixed& other -> la fonction prend un seul argument qui est une
            référence constante (const Fixed&) à un autre object fixed
            l'utilisation d'une référence permet de ne pas copier inutilement
            l'objet passé en argument.
            
            const -> a la fin de la déclaration indique que cette fonction ne modifie
            pas l'objet courant sur lequel elle est appelée.
        */

        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        Fixed& operator++(void);
        Fixed  operator++(int value);
        Fixed& operator--(void);
        Fixed  operator--(int value);

        static Fixed const &min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);

        
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif