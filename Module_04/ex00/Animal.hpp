/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:03:01 by moichou           #+#    #+#             */
/*   Updated: 2024/12/29 18:45:15 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
private:

public:
    Animal();
    Animal(const Animal &original);
    Animal(const std::string &type);
    ~Animal();

    Animal &operator=(const Animal &original);

protected:
    std::string type;

};


#endif