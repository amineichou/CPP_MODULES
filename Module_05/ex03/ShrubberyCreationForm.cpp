/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:11:44 by moichou           #+#    #+#             */
/*   Updated: 2025/03/21 17:42:38 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    AForm::operator=(src);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    AForm::checkExecution(executor);
    AForm::execute(executor);
    std::ofstream file((this->target + "_shrubbery").c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file");
    file << "      _-_\n"
            "   /~~   ~~\\\n"
            "/~~         ~~\\\n"
            "\\    O O     /\n"
            " \\     U     /\n"
            "  \\  (___)  /\n"
            "   \\ \\ | / /\n"
            "jgs  \\|/|/\n"
            "     /_ _\\\n";
    file.close();
}

const char *ShrubberyCreationForm::FileNotOpenedException::what() const throw()
{
    return ("Error: could not open file");
}
