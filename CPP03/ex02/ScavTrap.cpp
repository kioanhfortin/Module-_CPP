/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:14:33 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/11 17:28:37 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{ 
    set_hitPoint(100);
    set_energyPoint(50);
    set_attackDamage(20);
    std::cout << "ScavTrap " << get_name() << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
    set_hitPoint(100);
    set_energyPoint(50);
    set_attackDamage(20);
    std::cout  << "ScavTrap " << get_name() << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << get_name() << " destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        _energyPoint--;
        std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << " has no energy left " << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    _hitPoint -= amount;

    if (_hitPoint < 0) _hitPoint = 0;
    std::cout << "ScavTrap " << _name << " take " << _attackDamage << " point of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "ScavTrap " << _name << " regain " << amount << " hit point!" << std::endl;
    for (unsigned int i = 0; i < amount; i++)
        _hitPoint++;
}

void ScavTrap::guardGate()
{
    std::cout << "Gate keeper mode entered!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name)
{
    set_hitPoint(other._hitPoint);
    set_energyPoint(other._energyPoint);
    set_attackDamage(other._attackDamage);
    std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _energyPoint = other._energyPoint;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap " << _name << " Copy assignment operator called" << std::endl;
    return *this;
}