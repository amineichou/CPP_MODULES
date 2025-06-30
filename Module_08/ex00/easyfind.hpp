/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:59:29 by moichou           #+#    #+#             */
/*   Updated: 2025/06/30 18:29:44 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <iostream>
#include <algorithm>

template <typename T>
T easyfind(T &cn, int &num)
{
    T element = std::find(cn.begin(), cn.end(), num);
    if (element == cn.end())
        throw std::runtime_error("element not found");
    return element;  
}

template <typename T>
T easyfind(T &cn, int &num)
{
    T element = std::find(cn.begin(), cn.end(), num);
    if (element == cn.end())
        throw std::runtime_error("element not found");
    return element;  
}


#endif