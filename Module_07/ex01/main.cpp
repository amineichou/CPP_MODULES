/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:03:11 by moichou           #+#    #+#             */
/*   Updated: 2025/06/24 21:47:05 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void pulsOne(int &arrayElement)
{
    arrayElement++;
}


void printElement(const int &arrayElement)
{
    std::cout << arrayElement << std::endl;
}


int main(void)
{
    int array[] = {1, 2, 3, 4, 5};

    iter(array, 5, pulsOne);
    iter(array, 5, printElement);
    return 0;
}