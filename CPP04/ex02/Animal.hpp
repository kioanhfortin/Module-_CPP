/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:06:35 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:50:37 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include <string>

class Animal
{
    
public :
    Animal();
    Animal(std::string _type);
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
    virtual ~Animal();
    
    std::string get_type() const;
    void        set_type(std::string new_type);
    
    virtual void    makeSound() const = 0;
    
protected :
    std::string _type;

};

#endif