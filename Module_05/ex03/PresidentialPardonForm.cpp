/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 23:52:31 by moichou           #+#    #+#             */
/*   Updated: 2025/03/21 17:42:07 by moichou          ###   ########.fr       */
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

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    AForm::checkExecution(executor);
    AForm::execute(executor);
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
