/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:26:09 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 17:26:09 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP


#include <iostream>


class ClapTrap
{
    protected : //protected a la place de privé pour qu'ils soient accessibles par ScavTrap

        std::string	_Name;
        int 		_HitPoints;
        int 		_EnergyPoints;
        int 		_AttackDamage;
	
	public :

		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

# endif