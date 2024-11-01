/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:00:47 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 14:58:19 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie *createdZombie = new Zombie;

    createdZombie->setName(name);
    return (createdZombie);
}


void randomChump( std::string name ) {
    Zombie *createdZombi = newZombie(name);
    createdZombi->announce();
    delete createdZombi;
}