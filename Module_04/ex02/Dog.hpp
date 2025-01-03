/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:39:47 by moichou           #+#    #+#             */
/*   Updated: 2025/01/03 20:01:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
    Brain *brain;

public:
    Dog();
    Dog(const std::string &type);
    Dog(const Dog &original);
    ~Dog();

    Dog &operator=(const Dog &second);

    void makeSound() const;
};


#endif