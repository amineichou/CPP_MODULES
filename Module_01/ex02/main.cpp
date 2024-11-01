/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:27:08 by moichou           #+#    #+#             */
/*   Updated: 2024/10/13 11:09:20 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}