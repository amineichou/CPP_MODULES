/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:13:43 by moichou           #+#    #+#             */
/*   Updated: 2025/01/07 06:26:18 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    std::cout << "Brain : Constructor called" << std::endl;
}
Brain::Brain(const Brain &original)
{
    *this = original;
    std::cout << "Brain : Copy constructor called" << std::endl;
}
Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain : Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &second)
{
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    if (this != &second)
    {
        this->ideas = second.ideas;
    }
    return *this;
}