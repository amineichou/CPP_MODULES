/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:02:57 by moichou           #+#    #+#             */
/*   Updated: 2024/12/29 18:49:00 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor  called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor constructor  called" << std::endl;
}

Animal::Animal(const Animal &original)
{
    *this = original;
    std::cout << "Copy constructor  called" << std::endl;
}

Animal::Animal(const std::string &type)
{
    this->type = type;
    std::cout << "Paramiterized constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &second)
{
    if (this != &second)
    {
        this->type = second.type;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

