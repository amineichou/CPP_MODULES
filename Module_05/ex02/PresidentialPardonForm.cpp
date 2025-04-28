/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 23:52:31 by moichou           #+#    #+#             */
/*   Updated: 2025/04/28 21:16:48 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{
    this->target = "default";
}


PresidentialPardonForm::PresidentialPardonForm(const std::string n_target) : AForm("default", 25, 5)
{
    this->target = n_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm("default", 25, 5)
{
    *this = source;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
    this->target = source.target;
    return *this;
}

void PresidentialPardonForm::action(void) const
{
    std::cout << this->target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    AForm::CheckExec(executor);
    std::cout << this->target << " has been pardoned by " << executor.getName() << std::endl;
}
