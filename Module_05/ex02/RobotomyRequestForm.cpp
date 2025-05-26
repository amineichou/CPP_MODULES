/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:55:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/26 15:20:25 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
    std::cout << "RobotomyRequestForm with target [ " << this->target << " ] is started." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &u_target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = u_target;
    std::cout << "RobotomyRequestForm with target [ " << this->target << " ] is started." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm with target [ " << this->target << " ] is finished." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    AForm::operator=(src);
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    AForm::checkExecution(executor);
    std::cout << "*drilling noises* ";
    srand((unsigned int)time(0));
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " robotomization failed" << std::endl;
}

const char *RobotomyRequestForm::FileNotOpenedException::what() const throw()
{
    return ("Error: could not open file");
}



