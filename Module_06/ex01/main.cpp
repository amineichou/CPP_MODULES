/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:01 by moichou           #+#    #+#             */
/*   Updated: 2025/06/02 17:01:25 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


class Data
{
public:
    std::string name;
    int age;
    bool isStudent;

    Data(const std::string& n, int a, bool s)
        : name(n), age(a), isStudent(s) {}
    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Is Student: " << (isStudent ? "Yes" : "No") << std::endl;
    }
};


int main(void)
{
    Data original("Alice", 30, true);
    original.display(); 

    std::cout << "Address before serilize : {" << &original  << "}"<< std::endl;

    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "Serialized data: " << raw << std::endl;

    Data* deserialized = static_cast<Data*>(Serializer::deserialize(raw));
    deserialized->display();

    std::cout << "Address after deserialize : {" << deserialized  << "}"<< std::endl;

    return 0;
}

