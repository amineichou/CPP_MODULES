/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:14:19 by moichou           #+#    #+#             */
/*   Updated: 2024/11/09 22:07:18 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        std::cout << "Program args are not valid!" << std::endl;
        return 0;
    }
    (void)av;
    PhoneBook   MyPhoneBook;
    std::string cmd;

    while (true)
    {
        std::cout << "PHONE BOOK >> ";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
            MyPhoneBook.addContact();
        if (cmd == "SEARCH")
            MyPhoneBook.searchContacts();
    }

    return 0;
}