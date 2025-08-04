/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:27:16 by moichou           #+#    #+#             */
/*   Updated: 2025/08/04 11:27:17 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "invalid args" << std::endl;
        return 1;
    }

    RPN test;
    test.calculate(av[1]);

    return 0;
}
