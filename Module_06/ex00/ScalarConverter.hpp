/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:10 by moichou           #+#    #+#             */
/*   Updated: 2025/05/31 15:10:05 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <iostream>
#include <cstdlib>
#include <limits>


#define MAX_INT std::numeric_limits<int>::max()
#define MIN_INT -std::numeric_limits<int>::max()

#define MAX_FLOAT std::numeric_limits<float>::max()
#define MIN_FLOAT -std::numeric_limits<float>::max()

#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MIN_DOUBLE -std::numeric_limits<double>::max()

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter();

    ScalarConverter &operator=(const ScalarConverter &othr);

    static void convert(const std::string &ltr);

    void checkValidInput(std::string ltr) const;
    
};


bool isNumber(std::string ltr);

#endif
