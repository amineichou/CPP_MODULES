






#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>


template <typename TEMPL>
void iter(TEMPL *array, size_t length, void (*func)(TEMPL &))
{
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}





#endif 