/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:21:02 by moichou           #+#    #+#             */
/*   Updated: 2025/05/31 10:30:04 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }

    ScalarConverter converter;
    
    try {
        converter.checkValidInput(argv[1]);
        converter.convert(argv[1]);
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    catch (const char *e) {
        std::cerr << "Error: " << e << std::endl;
        return 1;
    }
    catch (...) {
        std::cerr << "Caught an unknown exception :( " << std::endl;
        return 1;
    }
    return 0;
}
