/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:51:15 by moichou           #+#    #+#             */
/*   Updated: 2024/11/09 17:36:50 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}

Fixed::Fixed() : fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &obj) : fixedPoint(obj.fixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        this->fixedPoint = obj.fixedPoint;
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
