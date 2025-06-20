/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:01 by moichou           #+#    #+#             */
/*   Updated: 2025/06/18 12:47:21 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main(void)
{
    Data original("Alice", 30, true);
    original.display(); 

    std::cout << "Address before serilize : {" << &original  << "}"<< std::endl;

    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "Serialized data: " << raw << std::endl;

    Data* deserialized = Serializer::deserialize(raw);
    deserialized->display();

    std::cout << "Address after deserialize : {" << deserialized  << "}"<< std::endl;

    return 0;
}

