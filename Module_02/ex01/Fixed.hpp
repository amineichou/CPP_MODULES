/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:07:46 by moichou           #+#    #+#             */
/*   Updated: 2024/12/23 09:24:33 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int fixedPoint;
    static const int fractionNumber = 8;

public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed(const int iFixedPoint);
    Fixed(const float iFixedPoint);
    ~Fixed();

    Fixed &operator=(const Fixed &obj);

    int getRawBits() const;
    void setRawBits(int raw);
    float toFloat() const;
    int toInt() const;

    friend std::ostream &operator<<(std::ostream &out, const Fixed &obj);
};

#endif
