/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:34:37 by moichou           #+#    #+#             */
/*   Updated: 2025/01/03 15:54:48 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::Cat(const std::string &type)
{
    this->type = type;
    this->brain = new Brain;
    std::cout << "Cat : Parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
    *this = original;
    std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat : Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &second)
{
    if (this != &second)
    {
        this->type = second.type;
        this->brain = second.brain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meaw" << std::endl;
}

