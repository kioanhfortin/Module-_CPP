/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:29:25 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/01 13:33:09 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _vir(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const vfix1) : _vir(vfix1 << _RawBits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const vfix2) : _vir(roundf(vfix2 * (1 << _RawBits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _vir(other._vir)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->_vir > other._vir;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->_vir < other._vir;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->_vir >= other._vir;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->_vir <= other._vir;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->_vir == other._vir;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->_vir != other._vir;
}

Fixed &Fixed::operator++()
{
    ++_vir;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed &Fixed::operator--()
{
    --_vir;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --(*this);
    return temp;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}