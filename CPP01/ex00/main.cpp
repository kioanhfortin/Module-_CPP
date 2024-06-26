/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:46:13 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 12:53:40 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* myZombie = newZombie("foo");
    myZombie->annouce();
    randomChump("bar");
    delete myZombie;
    return 0;
}