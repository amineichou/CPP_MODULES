/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:29 by moichou           #+#    #+#             */
/*   Updated: 2025/03/15 02:23:39 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "Form.hpp"

#include <iostream>
#include <string>


class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &src);

    const std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
    public:;
        const char *what() const throw();
    } gradeTooHighException;

    class GradeTooLowException : public std::exception {
    public:;
        const char *what() const throw();
    } gradeTooLowException;

    void signForm(class Form &form);
    
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);


#endif