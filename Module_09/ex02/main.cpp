/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:27:55 by moichou           #+#    #+#             */
/*   Updated: 2025/08/04 11:27:57 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: invalid args." << std::endl;
        return 1;
    }

    try
    {
        PmergeMe pmergeMe;
        pmergeMe.parseInput(ac, av);
        pmergeMe.runEverything(ac);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}