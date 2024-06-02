/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:49:46 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/02 13:13:33 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &_name) : _name(_name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
     std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;   
}

void    ClapTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
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

std::string ClapTrap::get_name() const
{
    return _name;
}

int ClapTrap::get_hitPoint() const
{
    return _hitPoint;
}

int ClapTrap::get_energyPoint() const
{
    return _energyPoint;
}

int ClapTrap::get_attackDamage() const
{
    return _attackDamage;
}

void ClapTrap::set_name(const std::string new_name)
{
    _name = new_name;
}

void ClapTrap::set_hitPoint(const int new_hitPoint)
{
    _hitPoint = new_hitPoint;
}

void ClapTrap::set_energyPoint(const int new_energyPoint)
{
    _energyPoint = new_energyPoint;
}

void ClapTrap::set_attackDamage(const int new_attackDamage)
{
    _attackDamage = new_attackDamage;
}