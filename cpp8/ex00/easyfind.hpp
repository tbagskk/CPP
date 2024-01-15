/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:00:46 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/14 10:48:48 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

class NotFoundException: public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("Occurence not found");
		}
};

template <typename T>
int	*easyfind(T &a, int b) // utilise les algorithmes STL
{
	typename T::iterator it = std::find(a.begin(), a.end(), b); // permet de chercher la 1ere occurence de la valeur b dans le range (a.begin & a.end)

	if (it == a.end())
		throw NotFoundException();
	return (&(*it)); // it est ensuite initialisé avec le resultat
}

#endif