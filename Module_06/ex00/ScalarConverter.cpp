/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/31 15:16:06 by moichou          ###   ########.fr       */
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

void ScalarConverter::checkValidInput(std::string ltr) const
{
    if (ltr.empty())
        throw "Invalid input";


    for (size_t i = 0; i < ltr.length(); i++)
    {
        if (!std::isalnum(ltr[i]) && ltr[i] != '-' && ltr[i] != '+' && ltr[i] != '.')
            throw "Invalid input";
    }
}


bool isNumber(std::string ltr)
{
    for (size_t i = 0; i < ltr.length(); i++)
    {
        if (!std::isdigit(ltr[i]) && ltr[i] != '-' && ltr[i] != '+' && ltr[i] != '.' && ltr[i] != 'f' && ltr != "nan" && ltr != "nanf")
            return false;
    }
    return true;
}


void ScalarConverter::convert(const std::string &ltr)
{
    char *ltrcstr = (char *)ltr.c_str();

    int charPresentaion;

    charPresentaion = std::atoi(ltrcstr);

    if (charPresentaion < 0 || charPresentaion > 127 || !isNumber(ltr))
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(charPresentaion))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << (char)charPresentaion << std::endl;

    long long intPresentaion = std::atoll(ltrcstr);
    if (intPresentaion < MIN_INT || intPresentaion > MAX_INT || !isNumber(ltr))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << intPresentaion << std::endl;

    float floatPresentaion = std::atof(ltrcstr);

    if (floatPresentaion < MIN_FLOAT || floatPresentaion > MAX_FLOAT || !isNumber(ltr))
        std::cout << "float: impossible" << std::endl;
    else
    {
        std::cout << "float: " << floatPresentaion;
        if (floatPresentaion - (int)(floatPresentaion) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }

    double doublePresentaion = std::atof(ltrcstr);

    if (doublePresentaion < MIN_DOUBLE || doublePresentaion > MAX_DOUBLE || !isNumber(ltr))
        std::cout << "double: impossible" << std::endl;
    else
    {
        std::cout << "double: " << doublePresentaion;
        if (doublePresentaion - (int)(doublePresentaion) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
}
