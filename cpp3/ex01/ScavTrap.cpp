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
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    _SpecialGate = false;

    std::cout << "Le constructeur de ScavTrap à été appelé" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{

    std::cout << "Le constrcuteur de copie de ScavTrap à été appelé" << std::endl;
}