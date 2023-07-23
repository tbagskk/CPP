/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:09:04 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 13:09:04 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void)
{
    Fixed one;
    Fixed two(one);
    Fixed three;

    three = two;

    std::cout << one.getRawBits() << std::endl;
	std::cout << two.getRawBits() << std::endl;
	std::cout << three.getRawBits() << std::endl;
	return 0;
}