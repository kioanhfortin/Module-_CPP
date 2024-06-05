/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:02:28 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 16:31:27 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(const std::string &_name);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator = (const ScavTrap &other);
    ~ScavTrap();

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    guardGate();

private:
        
};

#endif