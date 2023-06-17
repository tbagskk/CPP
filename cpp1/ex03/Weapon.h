/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:58:50 by gcherqui          #+#    #+#             */
/*   Updated: 2023/06/17 11:02:56 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string const &getType(void)const;
		void	setType(const std::string newType);
	private :
		std::string type;
};

#endif