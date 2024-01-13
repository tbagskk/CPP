/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:10:36 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 09:10:37 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &value1, T &value2)
{
	T value3 = value1;
	value1 = value2;
	value2 = value3;
}

template <typename T>
T	&min(T &value1, T &value2)
{
	return (value1 >= value2 ? value2 : value1);
}

template <typename T>
T	&max(T &value1, T &value2)
{
	return (value1 <= value2 ? value2 : value1);
}
#endif
