/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:25 by moichou           #+#    #+#             */
/*   Updated: 2025/06/18 12:54:59 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {}

Serializer::Serializer(const Serializer &othr) 
{
    (void)othr;
}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer &sec)
{
    (void)sec;
    return *this;
}


uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t uintptr)
{
    return reinterpret_cast<Data *>(uintptr);
}
