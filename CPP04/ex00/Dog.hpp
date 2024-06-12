/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:58:28 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 18:48:50 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class Dog : public Animal
{
public :
    Dog();
    Dog(std::string _type);
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
    ~Dog();

private :
    
};

#endif