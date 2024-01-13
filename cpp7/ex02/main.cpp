/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:05:31 by gcherqui          #+#    #+#             */
/*   Updated: 2024/01/13 09:56:57 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    Array<int> tmp;

    try
    {
        std::cout << "tmp[MAX_VAL]:\t" << tmp[MAX_VAL] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\t' << "Access past the last element of the array" << std::endl;
    }

    tmp = numbers;  // test d'opération d'affectation
    Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != test[i])
        {
            std::cerr << "Arrays don't have the same values!!" << std::endl;
            return 1;
        }
    }

    std::cout << std::endl << "test[1]:\t" << test[1] << std::endl;
    std::cout << "tmp[1]:\t\t" << tmp[1] << std::endl << std::endl;

    test[1] = 123456789;

    std::cout << "test[1]:\t" << test[1] << std::endl;
    std::cout << "tmp[1]:\t\t" << tmp[1] << std::endl << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Arrays don't have the same values!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;

    return 0;
}
