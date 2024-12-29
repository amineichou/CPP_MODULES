/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:32:36 by moichou           #+#    #+#             */
/*   Updated: 2024/12/29 17:38:10 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->setName("noName");
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original)
{
    *this = original;
    std::cout << "Copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->setName(name);
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    std::cout << "Parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &second)
{
    if (this != &second)
    {
        this->setName(second.getName());
        this->setEnergyPoint(second.getEnergyPoint());
        this->setHitPoint(second.getHitPoint());
        this->setAttackDamage(second.getAttackDamage());
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0)
    {
        std::cout << "FragTrap " << this->getName() << "has no energy to make an attack to target " << target << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->getName() << "attacks " << target << ", causing " << 1 << " points of damage!" << std::endl;
    unsigned int currEenergyPoint = this->getEnergyPoint();
    this->setEnergyPoint(currEenergyPoint--);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " wants a high five." << std::endl;
}