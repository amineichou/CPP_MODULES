/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 03:25:50 by moichou           #+#    #+#             */
/*   Updated: 2025/05/27 17:06:57 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    // tests

    // normal
    try {
        Bureaucrat b1("amine", 22);

        ShrubberyCreationForm amineForm("amine");

        amineForm.beSigned(b1);

        amineForm.execute(b1);

    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    
    try {
        Bureaucrat b1("amine", 22);

        PresidentialPardonForm amineForm("amine");

        amineForm.execute(b1);

        // will throw an exception because the form is not signed

    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat b1("amine", 22);

        RobotomyRequestForm amineForm("amine");

        amineForm.execute(b1);
        
        // will throw an exception because the form is not signed
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }


    // test intern

    try {
        Bureaucrat b1("amine", 22);

        Intern intern;

        AForm *form = intern.makeForm("presidential pardon", "amine");

        form->beSigned(b1);

        form->execute(b1);

        delete form;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // end :)
}
