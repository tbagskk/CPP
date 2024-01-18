/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:20:31 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:20:32 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"

int main( int ac, char **av )
{
	if (ac != 2)
		return ( std::cerr << "Usage: " << av[0] << " <path>" << std::endl, 1);
	BitcoinExchange btc;

	btc.readInput(av[1]);
}
