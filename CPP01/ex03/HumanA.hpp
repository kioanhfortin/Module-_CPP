/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:41:57 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 15:32:00 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
#include <iostream>

class HumanA
{
    
public:
    HumanA(const std::string &_name, Weapon &_type);
    ~HumanA();
    void attack() const;
    
private:
    Weapon &_type;
    std::string _name;

};

#endif