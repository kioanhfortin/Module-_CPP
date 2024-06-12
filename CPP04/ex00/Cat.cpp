/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 18:50:03 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
// # include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat " << get_type() << " Default Constructor called" << std::endl;
}

Cat::Cat(const std::string type) : Animal(type)
{
    std::cout << "Cat " << get_type() << " Constructor called" << std::endl;
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
    std::cout << "Cat " << get_type() << " Copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat " << get_type() << " Destructor called" << std::endl;
}