/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:32:16 by moichou           #+#    #+#             */
/*   Updated: 2025/06/26 18:07:45 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> someArrayOfInt(5);

    std::cout << "this array had " << someArrayOfInt.size() << " elements" << std::endl;

    for (unsigned int i = 0; i < someArrayOfInt.size(); i++)
    {
        someArrayOfInt[i] = i;
    }

    for (unsigned int i = 0; i < someArrayOfInt.size(); i++)
    {
        std::cout << someArrayOfInt[i] << std::endl;
    }

    // accessing out of range element

    try {
        someArrayOfInt[6] = 5;

        std::cout << someArrayOfInt[6] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "caught an exception : " << e.what() << std::endl;
    }

    // empty array

    Array<int> empty();

    return 0;
}
