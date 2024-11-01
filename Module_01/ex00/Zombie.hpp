/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:59:45 by moichou           #+#    #+#             */
/*   Updated: 2024/10/12 20:44:49 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>


class Zombie {

public:
    void announce(void) {
        std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
    }

    void setName(std::string newName)
    {
        this->name = newName;
    }

private:
    std::string name;
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif