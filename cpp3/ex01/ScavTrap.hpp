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
        bool _SpecialGate
    
    public :
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        void guardGate(void);


};

# endif