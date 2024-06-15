/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:16:18 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:16:58 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat " << get_type() << " Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat " << get_type() << " Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat " << get_type() << " Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "WrongCat " << get_type() << " Copy assignment operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat " << get_type() << " Destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "MEOWWW " << get_type() << std::endl; 
}