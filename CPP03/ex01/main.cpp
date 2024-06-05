/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:46:50 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 16:29:08 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Clap("Clappy");
    Clap.attack("practice target");
    Clap.takeDamage(5);
    Clap.beRepaired(3);

    std::cout << std::endl;

    ScavTrap ScavDefault;
    ScavDefault.attack("practice target Default");
    ScavDefault.takeDamage(40);
    ScavDefault.beRepaired(20);
    ScavDefault.guardGate();

    std::cout << std::endl;

    ScavTrap Scav("Scavvy");
    Scav.attack("practice target");
    Scav.takeDamage(20);
    Scav.beRepaired(10);
    Scav.guardGate();

    std::cout << std::endl;
}