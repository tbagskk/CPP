/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:58:50 by gcherqui          #+#    #+#             */
/*   Updated: 2023/06/21 23:01:29 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string const &getType(void);
		bool	setType(const std::string &newType);
	private :
		std::string type;
};

#endif