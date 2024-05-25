/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:48:41 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 15:43:13 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(const std::string new_type)
{
    _type = new_type; 
}

std::string Weapon::getType() const
{
    return _type;
}

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called" << std::endl;
}