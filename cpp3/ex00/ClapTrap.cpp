/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:31:26 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 17:31:26 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(10)
{
    std::cout << "Le constructeur à été appelé" << std::endl;
}

/*
    Mettre les attributs à coté du constructeur sert à les initialiser.
*/

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Le constructeur de copie a été appelé" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Le destructeur à été appelé" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints >= 1)
    {
        std::cout << "ClapTrap " << _Name << " attaque " << target << ", inflige " << _AttackDamage << " points de dégats" << std::endl;
        _EnergyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _Name << " n'a plus assez d'énergie pour attaquer" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints > 0)
    {
        std::cout << "ClapTrap " << _Name << " subit " << amount << " points de dégats." << std::endl;
        if (amount > (unsigned int)_HitPoints)
        {
           _HitPoints = 0;
            std::cout << "ClapTrap " << _Name << " n'a plus de point de vie!" << std::endl;
        }
        else
        {
            _HitPoints -= amount;
        }
    }
    else
    {
        std::cout << "ClapTrap " << _Name << " est déja K.O !" << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints >= 1)
    {
        std::cout << "ClapTrap " << _Name << " se sépare et regagne " << amount << " points de vie" << std::endl;
        _HitPoints += amount;
        _EnergyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _Name << " n'a plus assez de point d'énergy pour se réparer." << std::endl;
    }
}