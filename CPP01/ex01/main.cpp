/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:46:13 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 13:13:32 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* myZombie = zombieHorde(100, "foo");
    
    for(int i = 0; i < 100; i++)
    {
       myZombie[i].annouce();
    }
    
    delete myZombie;
    return 0;
}