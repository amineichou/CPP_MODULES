/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:22:23 by moichou           #+#    #+#             */
/*   Updated: 2025/07/16 20:22:39 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
    std::stack<int> storage;

public:
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);

    ~RPN();

    void calculate(std::string input);

};

#endif