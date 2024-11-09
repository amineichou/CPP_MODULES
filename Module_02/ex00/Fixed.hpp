/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:14:20 by moichou           #+#    #+#             */
/*   Updated: 2024/11/09 17:36:36 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#include <iostream>

class Fixed {
private:
    int fixedPoint;

public:
    int getRawBits() const;
    Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    ~Fixed();
};


#endif