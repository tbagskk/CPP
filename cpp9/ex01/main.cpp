/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:05 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:14:06 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN Rpn;

	if (Rpn.init_all(argc, argv))
		return (-1);
	if (Rpn.PolishMath(argv, -1))
		return (-1);
	return (0);
}