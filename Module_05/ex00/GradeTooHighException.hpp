/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:09:27 by moichou           #+#    #+#             */
/*   Updated: 2025/03/01 16:18:42 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION
#define GRADETOOHIGHEXCEPTION

#include <iostream>

class GradeTooHighException : public std::exception {
public:
    GradeTooHighException(std::string &message);
private:
    std::string message;
};

#endif