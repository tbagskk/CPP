/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:18 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:14:19 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <algorithm>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stack;
	
	public:
		RPN( void );

		void PolishMethod( char c );
		int PolishMath(char **t,  int i );
		int init_all(int argc, char **argv);

		// useless
		void printStack( void );
	
		std::stack<int> getStack(void) const;

		~RPN();
};

#endif