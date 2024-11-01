/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:55:21 by moichou           #+#    #+#             */
/*   Updated: 2024/10/14 18:06:20 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanB(std::string name) : _name(name), _weapon(nullptr) {}

    void setWeapon(Weapon weapon)
    {
        this->_weapon = &weapon;
    }

    void attack(void) {
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    }

};

#endif