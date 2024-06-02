/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:02:28 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/02 13:15:51 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap(const std::string &_name);
    ~ScavTrap();

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    guardGate();

private:
        
};

#endif