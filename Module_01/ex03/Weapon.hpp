/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:44:14 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 15:23:06 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
public:
    Weapon(std::string type)
    {
        this->setType(type);
    }

    std::string getType(void) {
        return this->_type;
    }

    void setType(std::string type) {
        this->_type = type;
    }
    
private:
    std::string _type;

};

#endif