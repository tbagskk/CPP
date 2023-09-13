/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:30:43 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 18:30:43 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{

    this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

    std::cout << "Le constructeur de ScavTrap à été appelé" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
    std::cout << "Le constructeur de copie de ScavTrap à été appelé" << std::endl;
	return;  
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &source )
{
	std::cout << "Opérateur d'affectation ScavTrap appelé" << std::endl;
	this->_Name = source._Name;
	this->_HitPoints = source._HitPoints;
	this->_EnergyPoints = source._EnergyPoints;
	this->_AttackDamage = source._AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructeur de ScapTrav appelé" << std::endl;
	return;
}

void ScavTrap::attack( std::string const & target )
{
    std::cout << "ScavTrap " << this->_Name << " attaque " << target << " causant " << this->_AttackDamage << " point de dégats" << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap" << this->_Name << " est en mode GardGate " << std::endl;
}