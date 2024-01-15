/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:03:33 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/14 10:44:59 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack( void ){};
		MutantStack( MutantStack const &copy ): std::stack<T>(copy){};
		MutantStack	&operator=( MutantStack const &rhs )
		{
			if (this == &rhs)
				return (*this);
			this->c = rhs.c;
			return (*this);
		};
		
		~MutantStack( void )
		{
			this->c.clear();
		};
		

		typedef typename std::stack<T>::container_type::iterator iterator;

		/* définit un alias de type pour simplifier l'utilisation du type d'itérateur du conteneur sous-jacent de la classe std::stack */

		iterator	begin( void )
		{
			return (this->c.begin());  // retourne un itérateur vers le début du conteneur
		};
		iterator	end( void )
		{
			return (this->c.end());  // retourne un itérateur vers la fin du conteneur
		};

};

#endif
