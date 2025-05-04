/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:44:31 by moichou           #+#    #+#             */
/*   Updated: 2025/05/04 16:10:47 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("defaultFormValues1_1"), gradeReqSign(1), gradeReqExec(1)
{
    this->isSigned = false;
}

Form::Form(const std::string in_name, const int in_gradeReqSign, const int in_gradeReqExec) : name(in_name), gradeReqSign(in_gradeReqSign), gradeReqExec(in_gradeReqExec)
{
    if (in_gradeReqSign < 1 || in_gradeReqExec < 1)
        throw Form::GradeTooHighException();
    if (in_gradeReqSign > 150 || in_gradeReqExec > 150)
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

const std::string Form::getName() const
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