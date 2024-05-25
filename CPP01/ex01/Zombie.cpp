/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:45:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 12:46:08 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::annouce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(const std::string new_name)
{
    _name = new_name; 
}

std::string Zombie::get_name() const
{
    return _name;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie Destructor called" << std::endl;
}