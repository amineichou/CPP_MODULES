/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataExample.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:56:36 by moichou           #+#    #+#             */
/*   Updated: 2025/06/19 12:17:40 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATAEXAMPLE_HPP
#define DATAEXAMPLE_HPP

/* my example of data class for testing */

#include <iostream>

class Data
{
public:
    std::string name;
    int age;
    bool isStudent;

    Data(const std::string& n, int a, bool s);

    void display() const ;
};



#endif