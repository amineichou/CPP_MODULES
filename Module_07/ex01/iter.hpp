/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:49:29 by moichou           #+#    #+#             */
/*   Updated: 2025/06/21 16:23:58 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>


template <typename TEMPL>
void iter(TEMPL *array, unsigned long length, void (*function)(TEMPL &arr))
{
    unsigned int i = 0;
    while (i < length)
    {
        function(array[i]);
        i++;
    }
}


template <typename TEMPL>
void iter(TEMPL *array, unsigned long length, void (*function)(const TEMPL &arr))
{
    unsigned int i = 0;
    while (i < length)
    {
        function(array[i]);
        i++;
    }
}



#endif 