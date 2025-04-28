/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:13:58 by moichou           #+#    #+#             */
/*   Updated: 2025/03/21 17:22:59 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return *this;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"};

    for (size_t i = 0; i < sizeof(formNames) / sizeof(*formNames); i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;

            switch (i)
            {
            case 0:
                return new ShrubberyCreationForm(target);
            case 1:
                return new RobotomyRequestForm(target);
            case 2:
                return new PresidentialPardonForm(target);
            }
        }
    }
    std::cout << "Intern cannot create " << name << std::endl;
    return NULL;
}