/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:30:44 by moichou           #+#    #+#             */
/*   Updated: 2025/07/09 16:18:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void)
{
    std::list <int>test;

    for (int i = 0; i < 10; i++)
    {
        test.push_back(i);
    }

    try {
        int findTest = easyfind(test, 5);

        std::cout << "Element found: " << findTest << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;   
    
}