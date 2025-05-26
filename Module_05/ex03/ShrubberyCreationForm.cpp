/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:11:44 by moichou           #+#    #+#             */
/*   Updated: 2025/05/26 15:41:28 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "default";
    std::cout << "ShrubberyCreationForm with target [ " << this->target << " ] is started." << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm with target [ " << this->target << " ] is started." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm with target [ " << this->target << " ] is finished." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    AForm::operator=(src);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    AForm::checkExecution(executor);


    std::ofstream file((this->target + "_shrubbery").c_str());
    if (!file.is_open())
        throw ShrubberyCreationForm::faildToOpenFileException();
    file << "\n"
            "    /~~   ~~\\\n"
            " /~~   0    0~~\\\n"
            "{  0    0   0   }\n"
            " \\  _-     -_  /\n"
            "      \\\\ //   \n"
            "       | |     \n"
            "       | |     \n"
            "      // \\\\ \n"
            "\n";
    file.close();
}

const char *ShrubberyCreationForm::faildToOpenFileException::what() const throw()
{
    return "Error: could not open file, uncorrect path or permission denied";
}
