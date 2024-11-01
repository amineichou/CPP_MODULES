/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:40:46 by moichou           #+#    #+#             */
/*   Updated: 2024/10/10 16:18:41 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Search(PhoneBook MyPhoneBook)
{
    int contactCount = MyPhoneBook.getContactsCount();
    if (contactCount != 0)
    {
        std::cout << "-------------------------------------------------------------------\n";
        std::cout << "|   First Name   |   Last Name   |   Nick Name  |   Phone Number    |\n";
        std::cout << "-------------------------------------------------------------------\n";

        for (int i = 0; i < contactCount; i++)
        {
            Contact tmp = MyPhoneBook.getContactByIndex(i);
            std::cout << "| " << "       " << tmp.getFirstName()
                      << " | " << "       " << tmp.getLastName()
                      << " | " << "       " << tmp.getNickName()
                      << " | " << "       " << tmp.getPhoneNumber() << " |\n";
        }

        std::cout << "-------------------------------------------------------------------\n";
    }
    else
        std::cout << "No contacts in the phone book!\n";
}

int main(void)
{
    PhoneBook   MyPhoneBook(0);
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string command;

    while (true)
    {
        std::cout << "PHONE BOOK >> ";
        std::cin >> command;

        if (command == "EXIT")
            break;

        if (command == "ADD")
        {
            std::cout << "First Name: ";
            std::cin >> FirstName;
            std::cout << "Last Name: ";
            std::cin >> LastName;
            std::cout << "Nick Name: ";
            std::cin >> NickName;
            std::cout << "Phone Number: ";
            std::cin >> PhoneNumber;

            Contact NewContact;
            NewContact.setFirstName(FirstName);
            NewContact.setLastName(LastName);
            NewContact.setNickName(NickName);
            NewContact.setPhoneNumber(PhoneNumber);
            MyPhoneBook.addContact(NewContact);
            printf("HERE\n");
        }

        if (command == "SEARCH")
            Search(MyPhoneBook);
    }

    return 0;
}
