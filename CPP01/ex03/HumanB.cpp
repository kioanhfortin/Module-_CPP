/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:48:41 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 12:12:02 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack() const
{
    if (_type)
    {
        std::cout << _name << " attacks with their " << _type->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " attack with his hand " << std::endl;
    }
}

void HumanB::setWeapon(Weapon &new_type)
{
    _type = &new_type;
}

HumanB::HumanB(const std::string &_name) : _name(_name), _type(nullptr)
{
    std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor called" << std::endl;
}