/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:10 by moichou           #+#    #+#             */
/*   Updated: 2025/05/29 11:21:12 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <iostream>

#include <cstdlib>


#define MAX_INT 2147483647
#define MIN_INT -2147483648

#define MAX_FLOAT 3.402823466e+38F
#define MIN_FLOAT -3.402823466e+38F

#define MAX_DOUBLE 1.7976931348623157e+308
#define MIN_DOUBLE -1.7976931348623157e+308


class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter();

    ScalarConverter &operator=(const ScalarConverter &othr);

    static void convert(const std::string &ltr);

    void checkValidInput(std::string ltr);


};

#endif