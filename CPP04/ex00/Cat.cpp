/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/11 17:38:45 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat " << get_type() << " default constructor called" << std::endl;
}

Cat::Cat(std::string &_type) : Animal(_type)
{
    std::cout << "Cat " << get_type() << " constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat " << get_type() << " Copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "Cat " << get_type() << "Coppy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat " << get_type() << " Destructor called" << std::endl;
}

void    makeSound()
{
    std::cout << "moew" << std::endl;
}