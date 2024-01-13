/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:10:25 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 09:10:26 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	func(T &value)
{
	value *= 10;
}

int main( void )
{
	int	tab[5] = { 1, 2, 3, 4, 5};

	iter(tab, 5, &func);

	for(int i = 0; i < 5; i++){
		std::cout << tab[i] << std::endl;
	}
	
}