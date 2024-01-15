/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:01:33 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 10:01:34 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdlib.h>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vector;

	public:
		Span( void );
		Span( unsigned int N );
		Span( Span const &copy );
		Span	&operator=( Span const &rhs );
		~Span( void );

		void	addNumber( int number );
		void	addNumbers( int range, bool isRandom );
		int		shortestSpan( void );
		int		longestSpan( void );

		class VectorFullException: public std::exception
		{
		public:
			virtual const char	*what() const throw()
			{
				return ("Vector is already full");
			}
 		};

		class VectorEmptyException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Vector is empty, no distance can be found");
				}
		};
		
		class VectorIsOneException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("There is only 1 int in vector, no distance can be found");
				}
		};

};

#endif
