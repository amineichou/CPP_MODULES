/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:52:50 by moichou           #+#    #+#             */
/*   Updated: 2025/03/17 01:53:23 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeReqSign;
    const int gradeReqExec;

public:
    AForm(const std::string name, const int gradeReqSign, const int gradeReqExec);
    AForm(const AForm &src);
    ~AForm();
    AForm &operator=(const AForm &src);

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeReqSign() const;
    int getGradeReqExec() const;

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    virtual void beSigned(const Bureaucrat &bureaucrat) = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
