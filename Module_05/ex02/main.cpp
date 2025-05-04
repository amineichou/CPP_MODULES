/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 03:25:50 by moichou           #+#    #+#             */
/*   Updated: 2025/04/29 16:43:06 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    // tests
    try {
        Bureaucrat A("amine", 22);
        ShrubberyCreationForm Plant("amine");
        RobotomyRequestForm Robotomy("amine");
        PresidentialPardonForm Pardon("amine");

        Robotomy.beSigned(A);
        Plant.beSigned(A);

        std::cout << A << std::endl;
        std::cout << Plant << std::endl;
        std::cout << Robotomy << std::endl;

        Robotomy.execute(A);
        Plant.execute(A);
        Pardon.execute(A);
    }
    catch (std::exception &e){
        std::cout << "caught exception : " << e.what() << std::endl;
    }
}