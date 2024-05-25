/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 12:44:23 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    
public:
    Zombie(std::string name);
    ~Zombie();
    
    void set_name(const std::string new_name);
    void annouce(void) const;
    
    std::string get_name() const;

private:
    std::string _name;
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif