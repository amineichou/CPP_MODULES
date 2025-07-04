/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:36:57 by moichou           #+#    #+#             */
/*   Updated: 2025/07/04 10:42:38 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int _N)
{
    this->N = _N;
}


Span::~Span() {}


Span &Span::operator=(const Span &othr)
{
    if (this != &othr)
    {
        N = othr.N;
        Store = othr.Store;
    }
    return *this;
}



void Span::addNumber(unsigned int toAdd)
{
    if (Store.size() == N)
        throw std::runtime_error("Can't add another number, Span is full");

    Store.push_back(toAdd);
}

unsigned int Span::shortestSpan()
{
    if (Store.size() < 2)
        throw std::runtime_error("Less than 2, no span :(");

    std::vector<unsigned int> Tmp = Store;
    std::sort(Tmp.begin(), Tmp.end());

    unsigned int shortest = std::numeric_limits<unsigned int>::max();

    for (size_t i = 0; i < Tmp.size() - 1; i++)
    {
        unsigned int diff = Tmp[i + 1] - Tmp[i];
        if (diff < shortest)
            shortest = diff;
    }

    return shortest;
}

unsigned int Span::longestSpan()
{
    if (Store.size() < 2)
        throw std::runtime_error("Not enough elements to find a span.");

    std::vector<unsigned int> Tmp(Store);
    std::sort(Tmp.begin(), Tmp.end());

    return Tmp.back() - Tmp.front();
}
