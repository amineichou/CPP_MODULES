/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:21:02 by moichou           #+#    #+#             */
/*   Updated: 2025/06/17 17:13:50 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void checkValidInput(std::string ltr)
{
    if (ltr.empty())
        throw "Invalid input";


    for (size_t i = 0; i < ltr.length(); i++)
    {
        if (!std::isalnum(ltr[i]) && ltr[i] != '-' && ltr[i] != '+' && ltr[i] != '.')
            throw "Invalid input";
    }
}



int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }
    
    try {
        checkValidInput(argv[1]);
        ScalarConverter::convert(argv[1]);
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
