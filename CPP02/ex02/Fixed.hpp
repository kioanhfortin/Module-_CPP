/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/31 19:31:03 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
    
public:
    Fixed();
    Fixed(int const vfix1);
    Fixed(float const vfix2);
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int _vir;
    static int const _RawBits = 8;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif