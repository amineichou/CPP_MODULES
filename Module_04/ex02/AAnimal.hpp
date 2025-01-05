/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:03:01 by moichou           #+#    #+#             */
/*   Updated: 2025/01/04 15:32:03 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
private:

public:
    AAnimal();
    AAnimal(const AAnimal &original);
    AAnimal(const std::string &type);
    virtual ~AAnimal() = 0;

    AAnimal &operator=(const AAnimal &original);

    virtual std::string getType() const = 0;

    virtual void makeSound() const = 0;

protected:
    std::string type;

};

std::ostream &operator<<(std::ostream &out, const AAnimal &A);

#endif