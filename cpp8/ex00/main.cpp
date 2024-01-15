/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:01:01 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 10:01:02 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int	* find;
	std::vector<int> arr;

	try
	{
		arr.push_back(10);
		arr.push_back(20);
		find = easyfind(arr, 20);
		std::cout << "Found number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int> arr2(10, -1);
		find = easyfind(arr2, 3);
		std::cout << "Found number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
