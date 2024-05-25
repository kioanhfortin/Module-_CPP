/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/22 22:43:58 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    
public:
    Zombie(void);
    ~Zombie(void);
    
    void annouce(void);

    Zombie* newZoombie(std::string name);
    
    void randoomChump(std::string name);
    
    std::string get_name() const;
    void set_name(const std::string new_name);

private:
    std::string name;
    
};

#endif