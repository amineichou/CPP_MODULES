/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:44:31 by moichou           #+#    #+#             */
/*   Updated: 2025/03/15 02:09:45 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string n_name, const int n_gradeReqSign, const int n_gradeReqExec) : name(n_name), gradeReqSign(n_gradeReqSign), gradeReqExec(n_gradeReqExec)
{
    if (n_gradeReqSign < 1 || n_gradeReqExec < 1)
        throw Form::GradeTooHighException();
    if (n_gradeReqSign > 150 || n_gradeReqExec > 150)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

Form::Form(const Form &source) : name(source.name), gradeReqSign(source.gradeReqSign), gradeReqExec(source.gradeReqExec)
{
    *this = source;
}

Form::~Form()
{
}

Form &Form::operator=(const Form &source)
{
    this->isSigned = source.isSigned;
    return *this;
}

const std::string &Form::getName() const
{
    return this->name;
}


bool Form::getIsSigned() const
{
    return this->isSigned;
}

int Form::getGradeReqSign() const
{
    return this->gradeReqSign;
}

int Form::getGradeReqExec() const
{
    return this->gradeReqExec;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form " << form.getName() << " is ";
    if (form.getIsSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeReqSign() << " to be signed and grade " << form.getGradeReqExec() << " to be executed." << std::endl;
    return out;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeReqSign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}