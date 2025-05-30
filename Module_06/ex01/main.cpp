/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:42:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/29 18:02:54 by moichou          ###   ########.fr       */
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

    // Serialize the object
    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "Serialized data: " << raw << std::endl;

    // Deserialize the object
    Data* deserialized = static_cast<Data*>(Serializer::deserialize(raw));
    deserialized->display();

    return 0;
}