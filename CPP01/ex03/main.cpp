/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:46:13 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 15:23:57 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    return 0;
}