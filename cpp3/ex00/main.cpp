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

#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap claptrap("Bob");

    claptrap.attack("Ennemi 1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Ennemi 2");
    claptrap.takeDamage(15);
    
    return 0;
}