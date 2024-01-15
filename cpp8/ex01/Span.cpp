/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:14:57 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/14 10:24:48 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _N(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Span::Span( unsigned int N ): _N(N)
{
	std::cout << "N constructor called with value : " << N << std::endl;
	this->_vector.reserve(N);
	return;
}

Span::Span( Span const &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Span	&Span::operator=( Span const &rhs )
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	
	this->_N = rhs._N;
	return (*this);
}

Span::~Span( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Span::addNumber( int number ) // ajoute un nombre a la span et lance exeption si limite n est atteinte
{
	if (this->_vector.size() == this->_N)
		throw Span::VectorFullException();
	this->_vector.push_back(number);
}

void	Span::addNumbers( int range, bool isRandom ) // ajoute plusieurs nombre a la span en utilisant addNumber
{
	for(int i = 0; i < range; i++)
	{
		try
		{
			addNumber(isRandom ? rand() % range : i);	
		}
		catch (Span::VectorFullException &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}	
}

int		Span::shortestSpan( void )
{
	if (this->_vector.empty()) // si vecteur vide -> exception
		throw Span::VectorEmptyException();
	else if (this->_vector.size() == 1) // si vecteur == 1 -> exception
		throw Span::VectorIsOneException();
	else
	{
		std::vector<int> copy = this->_vector; // créer une copie triée du vecteur original
		std::sort(copy.begin(), copy.end());

		std::vector<int>::iterator it = copy.begin(); // initaliser les itérateurs pour parcourir les élément du vecteur trié
		std::vector<int>::iterator itnext = copy.begin() + 1;
		int tmp = __INT_MAX__; // tmp pour stocker la + petite distance (en commencant par la plus grosse valeur possible)
		
		while (itnext != copy.end()) // parcours du vecteur trié et mettre a jour la + petite distance
		{
			if ((*itnext - *it) < tmp)
				tmp = *itnext - *it;
			it++;
			itnext++;
		}
		return (tmp); // retourner la plus petite distance
	}
}

int		Span::longestSpan( void )
{
	if (this->_vector.empty()) // vecteur vide donc exception
		throw Span::VectorEmptyException();
	else if (this->_vector.size() == 1) // vecteur = 1 donc exception
		throw Span::VectorIsOneException();
	else
	{
		std::vector<int> copy = this->_vector; //  création d'une copie triée du vecteur original
		std::sort(copy.begin(), copy.end());
		return (copy[copy.size() - 1] - copy[0]); // retourner la différence entre le dernier élement du vecteur et le 1er element (donne la + grande différence)
	}	
}
