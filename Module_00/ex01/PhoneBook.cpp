/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:40:46 by moichou           #+#    #+#             */
/*   Updated: 2024/11/09 22:09:41 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    ContactsCount = 0;
}

int isEmptyString(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return 0;
    }
    return 1;
}

void PhoneBook::addContact()
{
    Contact NewContact;
    std::string detail;

    std::cout << "FirstName : ";
    if (!std::getline(std::cin, detail) || !detail.length() || isEmptyString(detail))
    {
        std::cout << "Error adding contact" << std::endl;
        return ;
    }
    else {
        NewContact.setFirstName(detail);
    }

    std::cout << "LastName : ";
    if (!std::getline(std::cin, detail) || !detail.length())
    {
        std::cout << "Error adding contact" << std::endl;
        return ;
    }
    else {
        NewContact.setLastName(detail);
    }

    std::cout << "NickName : ";
    if (!std::getline(std::cin, detail) || !detail.length())
    {
        std::cout << "Error adding contact" << std::endl;
        return ;
    }
    else {
        NewContact.setNickName(detail);
    }

    std::cout << "PhoneNumber : ";
    if (!std::getline(std::cin, detail) || !detail.length() )
    {
        std::cout << "Error adding contact" << std::endl;
        return ;
    }
    else {
        NewContact.setPhoneNumber(detail);
    }

    std::cout << "DarkestSecret : ";
    if (!std::getline(std::cin, detail) || !detail.length() )
    {
        std::cout << "Error adding contact" << std::endl;
        return ;
    }
    else {
        NewContact.setDarkestSecret(detail);
    }

    if (ContactsCount > 8)
    {
        Contacts[0] = NewContact;
        ContactsCount++;
        return ;
    }
    Contacts[ContactsCount] = NewContact;
    ContactsCount++;
}

void PhoneBook::searchContacts() {
    if (ContactsCount == 0)
    {
        std::cout << "No contacts in the phone book!\n";
        return ;
    }
    for (int i = 0; i < ContactsCount; i++)
    {
        std::cout << "-------------------------------------------------------------------\n";
        std::cout << "|   First Name   |   Last Name   |   Nick Name  |   Phone Number    |\n";
        std::cout << "-------------------------------------------------------------------\n";

        for (int i = 0; i < ContactsCount; i++)
        {
            Contact tmp = getContactByIndex(i);
            std::cout << "| " << "       " << tmp.getFirstName()
                      << " | " << "       " << tmp.getLastName()
                      << " | " << "       " << tmp.getNickName()
                      << " | " << "       " << tmp.getPhoneNumber() << " |\n";
        }

        std::cout << "-------------------------------------------------------------------\n";
    }
}

void PhoneBook::setContactsCount(int newCount)
{
    ContactsCount = newCount;
}

int PhoneBook::getContactsCount(void)
{
    return ContactsCount;
}

Contact PhoneBook::getContactByIndex(int index)
{
    return Contacts[index];
}