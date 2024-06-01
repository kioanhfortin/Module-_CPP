/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:46:50 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/01 14:20:42 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Monster("Monster");
    ClapTrap Soldier("Soldier");

    Monster.attack("Soldier");
    Soldier.attack("Monster");
}