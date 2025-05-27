/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:40:10 by moichou           #+#    #+#             */
/*   Updated: 2025/05/27 10:32:06 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <iostream>



class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter();

    ScalarConverter &operator=(const ScalarConverter &othr);

    static void convert(const std::string &ltr);



};

#endif