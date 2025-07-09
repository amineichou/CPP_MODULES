/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:59:29 by moichou           #+#    #+#             */
/*   Updated: 2025/07/09 16:18:03 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T &cn, int &value)
{
    typename T::iterator it = std::find(cn.begin(), cn.end(), value);
    if (it == cn.end())
        throw std::runtime_error("element not found");
    return *it;
}

template <typename T>
int easyfind(const T &cn , const int &value)
{
    typename T::const_iterator it = std::find(cn.begin(), cn.end(), value);
    if (it == cn.end())
        throw std::runtime_error("element not found");
    return *it;
}



#endif