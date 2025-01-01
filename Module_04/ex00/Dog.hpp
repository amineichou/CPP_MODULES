/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:39:47 by moichou           #+#    #+#             */
/*   Updated: 2024/12/29 21:32:21 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class Dog : public Animal {
private:

public:
    Dog();
    Dog(const std::string &type);
    Dog(const Dog &original);
    ~Dog();

    Dog &operator=(const Dog &second);

};


#endif