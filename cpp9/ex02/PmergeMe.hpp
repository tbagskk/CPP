/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:15:03 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/16 15:15:04 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int     allCheck(int argc, char **argv);
void    AddAllInList( std::vector< int > *list_v, std::deque< int > *list_d, char **argv );

// Sort //

void    Result( std::vector< int > *list_v, std::deque< int > *list_d );

#endif