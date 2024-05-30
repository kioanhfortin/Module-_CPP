/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/30 17:44:43 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <iostream>
// #include <string>

class Fixed
{
    
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    ~Fixed();
    // int getRawBits(void) const;
    // void setRawBits(int const raw);

private:
    int _vir;
    static int const _int_cs;
};

#endif