/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:01:14 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 18:01:14 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void)
{
   ScavTrap Macron("Macron");

   Macron.attack("Trump");
   Macron.takeDamage(3);
   Macron.beRepaired(6);
   Macron.guardGate();
   Macron.takeDamage(15);

    
    return 0;
}