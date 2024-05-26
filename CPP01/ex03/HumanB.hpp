/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:41:50 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 12:10:42 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>
// # include <string>

class HumanB
{
    
public:
    HumanB(const std::string &_name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &new_type);

private:
    std::string _name;
    Weapon *_type;
};

#endif