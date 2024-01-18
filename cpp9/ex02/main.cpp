/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:54 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:14:55 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector< int > list_v;
	std::deque< int > list_d;
	
	if (allCheck(argc, argv) == -1)
		return (-1);
	AddAllInList( &list_v, &list_d, argv);
	Result( &list_v, &list_d );
	return (0);
}