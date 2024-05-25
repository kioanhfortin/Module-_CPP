/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:48:41 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 15:26:29 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}

HumanA::HumanA(const std::string &_name, Weapon &_type) : _type(_type), _name(_name) 
{
    std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor called" << std::endl;
}