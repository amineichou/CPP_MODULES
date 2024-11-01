/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:50:57 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 15:32:08 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;

public:
    HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

    void setWeapon(Weapon weapon)
    {
        this->_weapon = weapon;
    }

    void attack(void)
    {
        std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
    }
};

#endif