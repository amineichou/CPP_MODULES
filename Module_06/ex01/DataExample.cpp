/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataExample.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:16:38 by moichou           #+#    #+#             */
/*   Updated: 2025/06/19 12:17:49 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataExample.hpp"

Data::Data(const std::string& n, int a, bool s) : name(n), age(a), isStudent(s) {}

void Data::display() const
{
    std::cout << "Name: " << name << ", Age: " << age 
    << ", Is Student: " << (isStudent ? "Yes" : "No") << std::endl;
}