/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:51:01 by moichou           #+#    #+#             */
/*   Updated: 2025/05/23 18:52:05 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int gradeReqSign;
    const int gradeReqExec;

public:
    Form();
    Form(const std::string name, const int gradeReqSign, const int gradeReqExec);
    Form(const Form &src);
    ~Form();
    Form &operator=(const Form &src);
    
    // getters //
    const std::string getName() const;
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

    void beSigned(const Bureaucrat &bureaucrat);
};


std::ostream &operator<<(std::ostream &out, const Form &form);

#endif