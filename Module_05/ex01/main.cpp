/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:46:13 by moichou           #+#    #+#             */
/*   Updated: 2025/03/15 14:35:59 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat amine("amine", 2);
        Form f("form1", 50, 2);
        
        f.beSigned(amine);
        std::cout << f;


        Bureaucrat moichou("moichou", 150);
        Form f2("form2", 50, 2);
        moichou.signForm(f2);
        std::cout << f2;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}