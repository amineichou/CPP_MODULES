/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:39:00 by moichou           #+#    #+#             */
/*   Updated: 2025/01/02 11:31:34 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(const std::string &type)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog::Dog(const Dog &original)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &second)
{
    if (this != &second)
    {
        this->type = "Dog";
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}