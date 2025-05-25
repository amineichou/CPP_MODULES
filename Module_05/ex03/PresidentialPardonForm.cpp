/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 23:52:31 by moichou           #+#    #+#             */
/*   Updated: 2025/05/23 16:15:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{
    this->target = "default";
    std::cout << "PresidentialPardonForm with target [ " << this->target << " ] is started." << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const std::string n_target) : AForm("default", 25, 5)
{
    this->target = n_target;
    std::cout << "PresidentialPardonForm with target [ " << this->target << " ] is started." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm("default", 25, 5)
{
    *this = source;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm with target [ " << this->target << " ] is finished." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
    this->target = source.target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    AForm::checkExecution(executor);
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
