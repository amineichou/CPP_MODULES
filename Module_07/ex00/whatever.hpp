/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:02:48 by moichou           #+#    #+#             */
/*   Updated: 2025/06/03 18:02:50 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename ANY>
void swap(ANY  &a, ANY &b)
{
    ANY temp = a;
    a = b;
    b = temp;
}


template <typename ANY>
ANY min(ANY &a, ANY &b)
{
    if (a < b)
        return a;

    return b;
}

template <typename ANY>
ANY max(ANY &a, ANY &b)
{
    if (a > b)
        return a;

    return b;
}



#endif