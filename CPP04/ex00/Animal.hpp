/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:06:35 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 17:12:35 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
    
public :
    Animal();
    Animal(std::string _type);
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
    ~Animal();
    
    std::string get_type();
    void        set_type(std::string new_type);
    
private :
    std::string _type;

};

#endif