/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/29 11:35:49 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &othr)
{
    (void)othr;
    return *this;
}

void ScalarConverter::checkValidInput(std::string ltr)
{
    if (ltr.empty())
        throw "Invalid input";

    for (size_t i = 0; i < ltr.length(); i++)
    {
        if (!std::isdigit(ltr[i]) && ltr[i] != '-' && ltr[i] != '+' && ltr[i] != '.')
            throw "Invalid input";
    }
}

void ScalarConverter::convert(const std::string &ltr)
{   
    char *ltrcstr = (char *)ltr.c_str();
    
    if (ltrcstr[0] == '-' || ltrcstr[0] == '+')
    {
        if (ltrcstr[1] == '\0')
            throw "Invalid input";
    }

    int c = std::atoi(ltrcstr);

    if ( c < 0 || c > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << (char)c   << std::endl;

    long long i = std::atoi(ltrcstr);

    if (i < MIN_INT || i > MAX_INT)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;

    float f = std::atof(ltrcstr);

    if (f < MIN_FLOAT || f > MAX_FLOAT)
        std::cout << "float: impossible" << std::endl;
    else
    {
        std::cout << "float: " << f;
        if (f - static_cast<int>(f) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }

    double d = std::atof(ltrcstr);
    
    if (d < MIN_DOUBLE || d > MIN_DOUBLE)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << d << std::endl;

    
}