/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:13:31 by moichou           #+#    #+#             */
/*   Updated: 2024/12/29 15:23:04 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("moichou");
	ScavTrap b("zyamli");
	ScavTrap c(a);
    ScavTrap d;
    d = c;

    
    a.attack("skarim");
    a.takeDamage(4);
    
    b.attack("moichou");
    b.takeDamage(30);

    
    c.beRepaired(10);

    return 0;
}