/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:56:51 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 13:10:21 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *horde = new Zombie(name);
    for(int i = 0; i < N; i++)
    {
       horde[i].set_name(name);
    }
    return (horde); 
}