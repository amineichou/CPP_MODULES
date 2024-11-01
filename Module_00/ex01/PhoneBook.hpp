/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:40:39 by moichou           #+#    #+#             */
/*   Updated: 2024/09/25 18:03:56 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;

public:
    // Contact(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber)
    // {
    //     this->FirstName = FirstName;
    //     this->LastName = LastName;
    //     this->NickName = NickName;
    //     this->PhoneNumber = PhoneNumber;
    // }
    std::string getFirstName(void)
    {
        return this->FirstName;
    }
    std::string getLastName(void)
    {
        return this->LastName;
    }
    std::string getNickName(void)
    {
        return this->NickName;
    }
    std::string getPhoneNumber(void)
    {
        return this->PhoneNumber;
    }
    void setFirstName(std::string firstName)
    {
        this->FirstName = firstName;
    }
    void setLastName(std::string lastName)
    {
        this->LastName = lastName;
    }
    void setNickName(std::string nickName)
    {
        this->NickName = nickName;
    }
    void setPhoneNumber(std::string phoneNumber)
    {
        this->PhoneNumber = phoneNumber;
    }
};

class PhoneBook
{
private:
    int ContactsCount;
    Contact Contacts[8];

public:
    PhoneBook(int contactsCount) {
        this->ContactsCount = contactsCount;
    }
    void addContact(Contact NewContact)
    {
        if (ContactsCount < 8)
        {
            std::cout << this->ContactsCount << "\n";
            Contacts[this->ContactsCount] = NewContact;
            this->ContactsCount++;
        }
        else
        {
            Contacts[0] = NewContact;
        }
    }
    void setContactsCount(int newCount)
    {
        this->ContactsCount = newCount;
    }
    int getContactsCount(void)
    {
        return this->ContactsCount;
    }
    Contact getContactByIndex(int index)
    {
        return (this->Contacts[index]);
    }
};

#endif