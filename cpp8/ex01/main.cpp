/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:14:54 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/15 10:51:41 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	int size = 50;
	Span span = Span(size); // création d'un instance de classe span avec 50 éléments max

	for(int i = 0; i < size / 2; i++)  // ajout de nombre aléatoire a span (moitié de la capacité)
		span.addNumber( rand() % size );
		//span.addNumber( i );
	
	span.addNumbers(size / 2, false);  // ajout de nombre a la span avec la 2e fonction pour atteindre 50 éléments
	
	try
	{
		span.addNumber( 100 );  // tentatives d'ajouter un autre nombre a la span (ce qui va lancer une exception)
	}
	catch( Span::VectorFullException &e )
	{
		std::cerr << "Can't add more number because : " << e.what() << std::endl;
	}

	std::cout << "Shortest span is : " << span.shortestSpan() << std::endl;  // affichage de la plus petite distance
	std::cout << "Longest span is : " << span.longestSpan() << std::endl;	// affichage de la + grande distance


	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}
