/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:29 by moichou           #+#    #+#             */
/*   Updated: 2025/05/04 15:23:42 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "Form.hpp"

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &src);

    const std::string getName() const;
    int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();

    void signForm(class Form &form);
    
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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif