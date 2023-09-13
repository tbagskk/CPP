/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:30:41 by gcherqui          #+#    #+#             */
/*   Updated: 2023/07/23 18:30:41 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        ScavTrap(void); // permet de ne pas appeler scavtrap sans spécifier un nom lors de la création
    
    public :
        ScavTrap(const std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap	&operator=(const ScavTrap &source);

        void attack(const std::string &target);
        void guardGate(void);
};

# endif