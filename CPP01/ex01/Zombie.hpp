/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 13:53:56 by kfortin          ###   ########.fr       */
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
    
    void annouce(void) const;
    
    void set_name(const std::string new_name);
    std::string get_name() const;

private:
    std::string _name;
    
};

Zombie* zombieHorde(int N, std::string name);

#endif