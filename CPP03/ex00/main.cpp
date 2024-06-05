/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:46:50 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 09:28:09 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Monster("Monster");
    ClapTrap Soldier("Soldier");
    ClapTrap Alien0("Alien");
    ClapTrap Alien1;
    

    Alien1 = Alien0;

    Monster.attack("Soldier");
    Alien1.attack("Monster");
    Soldier.takeDamage(0);
    Monster.beRepaired(10);
    Soldier.attack("Monster");
}