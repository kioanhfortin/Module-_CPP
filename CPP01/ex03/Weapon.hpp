/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:41:57 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 15:43:15 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>
#include <string>

class Weapon
{
    
public:
    Weapon(std::string _type);
    ~Weapon();
    std::string getType() const;
    void    setType(const std::string new_type);
    
private:
    std::string _type;

};

#endif