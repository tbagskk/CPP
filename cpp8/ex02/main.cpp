/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:03:17 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/15 11:47:11 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

static void MutanTMethode(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl; // affichage du sommet de la pile
	
	mstack.pop();  // retrait du sommet de la pile
	
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();  // utilisation des itérateurs pour parcourir la pile
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// Test de la copie de la pile
    MutantStack<int> mstackCopy = mstack;
    std::cout << "Copied stack size: " << mstackCopy.size() << std::endl;

    // Test de l'opérateur d'assignation
    MutantStack<int> mstackAssign;
    mstackAssign = mstack;
    std::cout << "Assigned stack size: " << mstackAssign.size() << std::endl;
}

static void ListMethode(void)
{
	std::list<int> lstack;

	lstack.push_back(5);
	lstack.push_back(17);

	std::cout << lstack.back() << std::endl;
	
	lstack.pop_back();

	std::cout << lstack.size() << std::endl;

	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);

	std::list<int>::iterator it = lstack.begin();
	std::list<int>::iterator ite = lstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::list<int> s(lstack);

	std::list<int> lstackCopy = lstack;
    std::cout << "Copied stack size: " << lstackCopy.size() << std::endl;

    std::list<int> lstackAssign;
    lstackAssign = lstack;
    std::cout << "Assigned stack size: " << lstackAssign.size() << std::endl;
}

int main()
{
	std::cout << "- Mutant stack -\n" << std::endl;

	MutanTMethode();

	std::cout << "\n- List stack -\n" << std::endl;

	ListMethode();

	
}