/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:25 by moichou           #+#    #+#             */
/*   Updated: 2025/06/02 16:57:10 by moichou          ###   ########.fr       */
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


uintptr_t Serializer::serialize(void *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

void* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<void*>(raw);
}
