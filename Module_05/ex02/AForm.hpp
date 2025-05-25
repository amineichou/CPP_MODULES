/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:52:50 by moichou           #+#    #+#             */
/*   Updated: 2025/05/23 15:04:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat; 

class AForm
{
protected:
    void checkExecution(const Bureaucrat &executor) const;

private:
    const std::string name;
    bool isSigned;
    const int gradeReqSign;
    const int gradeReqExec;

public:
    AForm(const std::string name, const int gradeReqSign, const int gradeReqExec);
    AForm(const AForm &src);
    virtual ~AForm();
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

    class FormNotSignedException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    void beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
