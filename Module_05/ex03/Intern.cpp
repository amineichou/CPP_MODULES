/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:13:58 by moichou           #+#    #+#             */
/*   Updated: 2025/05/23 15:29:41 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern with address [ " << this << " ] is hired and starts working." << std::endl;
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern() {
    std::cout << "Intern with address [ " << this << " ] is fired." << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return *this;
}


const char *Intern::CouldntMakeFormException::what() const throw()
{
    return "Intern faild to create the form. maybe hire a new one.";
}

// if the name is not valid a NULL will be returned,  so handliing it outside this func pls
AForm *Intern:: makeForm(const std::string &name, const std::string &target)
{

    std::vector<std::string> validFormNames;

    validFormNames.push_back("presidential pardon");
    validFormNames.push_back("robotomy request");
    validFormNames.push_back("shrubbery creation");

    for (size_t i = 0; i < validFormNames.size(); i++)
    {   
        if (name == validFormNames[i])
        {
            std::cout << "Intern creates " << name << " for " << target << std::endl;

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
    throw Intern::CouldntMakeFormException();
    return NULL;
}