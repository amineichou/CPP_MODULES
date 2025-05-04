/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:35:44 by moichou           #+#    #+#             */
/*   Updated: 2025/05/04 16:09:27 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("amine")
{
    this->grade = 1;
    std::cout << "Default bureaucrat [" << this->name << "] is born" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string n_name, int n_grade) : name(n_name)
{
    if (n_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (n_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = n_grade;
    std::cout << "Bureaucrat [" << this->name << "] is born." << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &source) : name(source.name)
{
    *this = source;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat [" << this->name << "] is dead." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source)
{
    this->grade = source.grade;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
    throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
    throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return out;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        if (this->grade > form.getGradeReqSign())
            throw Form::GradeTooLowException();
        form.beSigned(*this);
        std::cout << this->name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}