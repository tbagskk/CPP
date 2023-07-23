/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:09:06 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 13:09:06 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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