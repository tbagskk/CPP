/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:10:27 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 09:10:28 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T	*tab, int size, void (*func)(T &))
{
	if (!tab || !func)
		return ;
	for(int i = 0; i < size; i++)
		func(tab[i]);
}

#endif
