/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:37:16 by moichou           #+#    #+#             */
/*   Updated: 2025/07/04 10:41:22 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP



#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>

#include <algorithm>

class Span {
    private:
        unsigned int N;
        std::vector<unsigned int> Store;
    
    public:
        Span();
        Span(unsigned int _N);
        ~Span();
        
        Span &operator=(const Span &othr);
        
        void addNumber(unsigned int toAdd);

        unsigned int shortestSpan();
        unsigned int longestSpan();
};








#endif