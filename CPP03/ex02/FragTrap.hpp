/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:20:00 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 16:36:24 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    
public:
    FragTrap();
    FragTrap(const std::string &_name);
    FragTrap(const FragTrap &other);
    FragTrap &operator = (const FragTrap &other);
    ~FragTrap();

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    highFivesGuys(void);
    
private:

};

#endif