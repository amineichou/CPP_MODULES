/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:55:01 by moichou           #+#    #+#             */
/*   Updated: 2025/04/28 21:17:05 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &u_target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = u_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    AForm::operator=(src);
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    AForm::CheckExec(executor);

    std::cout << "*drilling noises* ";
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully by " << executor.getName() << std::endl;
    else
        std::cout << this->target << " robotomization failed" << std::endl;
}

const char *RobotomyRequestForm::FileNotOpenedException::what() const throw()
{
    return ("Error: could not open file");
}

void RobotomyRequestForm::action() const
{
    std::cout << "*drilling noises* ";
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " robotomization failed" << std::endl;
}