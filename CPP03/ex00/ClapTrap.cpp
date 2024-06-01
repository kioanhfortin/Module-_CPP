/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:49:46 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/01 14:32:08 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &_name) : _name(_name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
     std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << "destructor called" << std::endl;   
}

void    ClapTrap::attack(const std::string &target)
{
    // ClapTrap target(target);
    if (_energyPoint > 0)
    {
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        // std::cout << "ClapTrap " << _name << " attack " << target._name << ", causing " << _attackDamage << " points of damage!" << std::endl;
        // target.takeDamage(_attackDamage);
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy left " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoint -= amount;

    if (_hitPoint < 0) _hitPoint = 0;
    std::cout << "ClapTrap " << _name << " take " << _attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " regain " << amount << " hit point!" << std::endl;
    for (unsigned int i = 0; i < amount; i++)
        _hitPoint++;
}
