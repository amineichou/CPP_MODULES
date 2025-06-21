/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:32:53 by moichou           #+#    #+#             */
/*   Updated: 2025/06/21 18:40:50 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <cstdlib>

template <typename T>
class Array
{
private:
    T *arrayElements;
    unsigned int arraySize;

    
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array &othr);

    Array &operator=(const Array &othr);


    T &operator[](unsigned int index);


    const T &operator[](unsigned int index) const;

    unsigned int size(void) const;

};


template <typename T>
Array<T>::Array()
{
    arrayElements = NULL;
    arraySize = 0;
}


template <typename T>
Array<T>::Array(unsigned int n)
{
    if (n == 0)
    {
        arrayElements = NULL;
        arraySize = 0;
    }
    else
    {
        arrayElements = new T[n];
        arraySize = n;
    }
}


template <typename T>
Array<T>::~Array()
{
    delete[] arrayElements;
}

template <typename T>
Array<T>::Array(const Array &othr)
{
    arraySize = othr.arraySize;
    if (arraySize == 0)
    {
        arrayElements = NULL;
    }
    else
    {
        arrayElements = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; ++i)
            arrayElements[i] = othr.arrayElements[i];
    }
}



#endif