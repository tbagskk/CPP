/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:12 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:14:13 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RPN.hpp"

static void error(std::string str)
{
	std::cout << str << std::endl;
}

RPN::RPN( void )
{
	
}

int RPN::init_all(int argc, char **argv)
{
	char c = 0;
	
	if (argc != 2)
	{
		std::cout << "arguments error" << std::endl;
		return (-1);
	}

	for (int i = 0; argv[1][i]; i++)
	{
		c = argv[1][i];
		if (!((c >= '0' && c <= '9') || c == '+' || c == '-' || c == '/' || c == '*' || c == ' ' ))
			return (error("Error"), -1);
	}
	return (0);
}

void RPN::PolishMethod( char c )
{
	int first = 0;
	int second = 0;

	second = _stack.top();
	_stack.pop();
	first = _stack.top();
	_stack.pop();
	if (c == '+')
		_stack.push(first + second);
	else if (c == '/')
		_stack.push(first / second);
	else if (c == '-')
		_stack.push(first - second);
	else if (c == '*')
		_stack.push(first * second);
}

int RPN::PolishMath(char **t,  int i )
{
	char c = ' ';
	std::string str = "";
	while (t[1][++i])
	{
		str = "";
		c = t[1][i];
		str = str + c;
		if (c == ' ')
			continue;
		else if (c >= '0' && c <= '9')
			_stack.push(std::atoi(str.c_str()));
		else if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			if (_stack.size() > 1)
				PolishMethod( c );
			else
				return (error("Error"), -1);
		}
	}
	if (_stack.size() == 1 && _stack.top() <= 2147483647 && _stack.top() >= -2147483648)
	{
		std::cout << _stack.top() << std::endl;
		return (1);
	}
	else
		return (error("Error"), -1);
	return (error("Error"), -1);
}

std::stack<int> RPN::getStack(void) const
{
	return (_stack);
}

RPN::~RPN()
{
	
}