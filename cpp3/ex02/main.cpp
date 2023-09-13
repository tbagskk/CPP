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
#include "FragTrap.hpp"


int main(void)
{
   FragTrap Poutine("Влади́мир Влади́мирович Пу́тин");

   Poutine.attack("Сталин");
   Poutine.takeDamage(3);
   Poutine.beRepaired(6);
   Poutine.highFivesGuys();
   Poutine.takeDamage(15);


    
    return 0;
}