/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:27:40 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 09:29:46 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
    
public:
    ClapTrap();
    ClapTrap(const std::string &_name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator = (const ClapTrap &other);
    ~ClapTrap();

    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string get_name() const;
    int get_hitPoint() const;
    int get_energyPoint() const;
    int get_attackDamage() const;
    
    void set_name(const std::string new_name);
    void set_hitPoint(const int new_hitPoint);
    void set_energyPoint(const int new_energyPoint);
    void set_attackDamage(const int new_attackDamage);
    

protected:
    std::string _name;
    int _hitPoint;
    int _energyPoint;
    int _attackDamage;
};

#endif