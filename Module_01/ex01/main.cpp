/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:06:14 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 10:25:45 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void) {
    int N  = 5;
    Zombie *tmp = zombieHorde(N, "amine");

    for (int i = 0; i < N; i++) {
        tmp[i].announce();
    }

    delete[] tmp;


    while(true)
        ;
    return 0;
}