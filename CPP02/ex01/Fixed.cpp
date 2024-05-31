/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:29:25 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/31 19:36:23 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _vir(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const vfix1) : _vir(vfix1 << _RawBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const vfix2) : _vir(roundf(vfix2 * (1 << _RawBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _vir(other._vir)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void) const
{
    return this->_vir;
}

void    Fixed::setRawBits(int const raw)
{
    this->_vir = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_vir) /  (1 << _RawBits);
}

int Fixed::toInt(void) const
{
    return _vir >> _RawBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}