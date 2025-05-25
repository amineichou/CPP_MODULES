/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:34:52 by moichou           #+#    #+#             */
/*   Updated: 2025/05/22 18:40:42 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string n_name, const int n_gradereqsign, const int n_gradereqexec) : 
name(n_name), gradeReqSign(n_gradereqsign), gradeReqExec(n_gradereqexec)
{
    if (n_gradereqsign < 1 || n_gradereqexec < 1)
        throw AForm::GradeTooHighException();
    if (n_gradereqsign > 150 || n_gradereqexec > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = false;
    std::cout << "Form [ " << this->name << " ] is out." << std::endl;
}

AForm::AForm(const AForm &source) : name(source.name), gradeReqSign(source.gradeReqSign), gradeReqExec(source.gradeReqExec)
{
    *this = source;
}

AForm::~AForm()
{
    std::cout << "Form [ " << this->name << " ] is burned." << std::endl;
}

AForm &AForm::operator=(const AForm &source)
{
    this->isSigned = source.isSigned;
    return *this;
}

const std::string &AForm::getName() const
{
    return this->name;
}


bool AForm::getIsSigned() const
{
    return this->isSigned;
}

int AForm::getGradeReqSign() const
{
    return this->gradeReqSign;
}

int AForm::getGradeReqExec() const
{
    return this->gradeReqExec;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form " << form.getName() << " is ";
    if (form.getIsSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeReqSign() << " to be signed and grade " 
    << form.getGradeReqExec() << " to be executed." << std::endl;
    return out;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeReqSign)
        throw Bureaucrat::GradeTooLowException();
    this->isSigned = true;
}

void AForm::checkExecution(const Bureaucrat &executor) const
{
    if (!this->isSigned)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->gradeReqExec)
        throw Bureaucrat::GradeTooLowException();
}