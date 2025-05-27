/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/27 10:32:09 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
    std::cout << "ScalarConverter copy constructor called" << std::endl;
}


ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}



ScalarConverter &ScalarConverter::operator=(const ScalarConverter &othr)
{
    if (this != &othr)
    {
        // Copy the state from othr to this instance
    }
    std::cout << "ScalarConverter assignment operator called" << std::endl;
    return *this;
}


void ScalarConverter::convert(const std::string &ltr)
{
    for (int i = 0; i < ltr.length(); i++)
    {
        
    }
}