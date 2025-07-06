/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:42:55 by moichou           #+#    #+#             */
/*   Updated: 2025/07/04 17:26:14 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }

    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;

    
    typename std::stack<T>::container_type::iterator begin()
    {
        return this->c.begin();
    }

    typename std::stack<T>::container_type::iterator end()
    {
        return this->c.end();
    }

    typename std::stack<T>::container_type::const_iterator begin() const
    {
        return this->c.begin();
    }

    typename std::stack<T>::container_type::const_iterator end() const
    {
        return this->c.end();
    }
    
};

#endif