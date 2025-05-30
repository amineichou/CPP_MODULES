/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:34 by moichou           #+#    #+#             */
/*   Updated: 2025/05/29 18:06:41 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP


#include <iostream>
typedef unsigned long uintptr_t;


class Serializer
{
public:
    Serializer();
    Serializer(const Serializer&othr);
    ~Serializer();
    
    Serializer& operator=(const Serializer&sec);
    
    
    static uintptr_t serialize(void* ptr);
    static void* deserialize(uintptr_t raw);

};


#endif