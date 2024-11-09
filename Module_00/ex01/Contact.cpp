/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:46:09 by moichou           #+#    #+#             */
/*   Updated: 2024/11/09 21:15:52 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getFirstName(void) const
{
    return FirstName;
}

std::string Contact::getLastName(void) const
{
    return LastName;
}

std::string Contact::getNickName(void) const
{
    return NickName;
}

std::string Contact::getPhoneNumber(void) const
{
    return PhoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return DarkestSecret;
}

void Contact::setFirstName(std::string firstName)
{
    FirstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    LastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
    NickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    PhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    DarkestSecret = darkestSecret;
}