/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:35:35 by moichou           #+#    #+#             */
/*   Updated: 2025/07/04 10:33:05 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    // test from subject
    std::cout << "--------------------------------------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    // my tests

    try
    {
        Span test = Span(1000);

        for (size_t i = 0; i < 1000; i++)
        {
            test.addNumber(i);
        }

        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;

        std::cout << "--------------------------------------" << std::endl;
        // add more than N = 1000

        test.addNumber(6545646);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}