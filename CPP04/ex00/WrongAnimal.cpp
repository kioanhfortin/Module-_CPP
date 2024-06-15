/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:21:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:21:04 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default")
{
    std::cout << "WrongAnimal" << _type << " Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal " << _type << " Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
    std::cout << "WrongAnimal " << _type << " Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "WrongAnimal " << _type << " Copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal " << _type << " Destructor called" << std::endl;
}

std::string WrongAnimal::get_type() const
{
    return _type;
}

void        WrongAnimal::set_type(std::string new_type)
{
    _type = new_type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Brrrbrrr " << get_type() << std::endl; 
}