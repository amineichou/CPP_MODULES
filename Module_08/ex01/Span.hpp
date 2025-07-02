/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:37:16 by moichou           #+#    #+#             */
/*   Updated: 2025/07/01 20:45:49 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP



#include <iostream>


class Span {
    private:
        unsigned int N;
    
    public:
        Span();
        Span(unsigned int _N);
        ~Span();
        
        Span &operator==(const Span &othr);
        
};








#endif