/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:25:00 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/02 18:43:09 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name)
{
    set_hitPoint(100);
    set_energyPoint(100);
    set_attackDamage(30);
    std::cout  << "FragTrap " << get_name() << " constructor called" << std::endl;
}
 
FragTrap::~FragTrap()
{
     std::cout << "FragTrap " << get_name() << " destructor called" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        _energyPoint--;
        std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << _name << " has no energy left " << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    _hitPoint -= amount;

    if (_hitPoint < 0) _hitPoint = 0;
    std::cout << "FragTrap " << _name << " take " << _attackDamage << " point of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FragTrap " << _name << " regain " << amount << " hit point!" << std::endl;
    for (unsigned int i = 0; i < amount; i++)
        _hitPoint++;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Could you give me a high fives !" << std::endl;
}