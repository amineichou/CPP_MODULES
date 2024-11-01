/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:14:58 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 10:25:17 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name ) {
    Zombie *allZombies = new Zombie[N];

    for (int i = 0; i < N; i++) {
        allZombies[i].setName(name);
    }

    return allZombies;
}