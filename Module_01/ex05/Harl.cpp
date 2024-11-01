/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:33:19 by moichou           #+#    #+#             */
/*   Updated: 2024/11/01 17:05:54 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*fun)();

    if (level == "DEBUG")
    {
        fun = &Harl::debug;
    }
    else if (level == "INFO")
    {
        fun = &Harl::info;
    }
    else if (level == "WARNING")
    {
        fun = &Harl::warning;
    }
    else if (level == "ERROR")
    {
        fun = &Harl::error;
    }
    else
    {
        std::cout << "Invalid level." << std::endl;
        return;
    }
    (this->*fun)();
}
