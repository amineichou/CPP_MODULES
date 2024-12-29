/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:13:31 by moichou           #+#    #+#             */
/*   Updated: 2024/12/28 14:39:21 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("moichou");
	ClapTrap b("zyamli");
	ClapTrap c(a);
    ClapTrap d;
    d = c;

    
    a.attack("skarim");
    a.takeDamage(4);
    
    b.attack("moichou");
    b.takeDamage(30);

    
    c.beRepaired(10);

    return 0;
}