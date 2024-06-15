/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:06:35 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:19:02 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>
# include <string>

class WrongAnimal
{
    
public :
    WrongAnimal();
    WrongAnimal(std::string _type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator = (const WrongAnimal &other);
    virtual ~WrongAnimal();
    
    std::string get_type() const;
    void        set_type(std::string new_type);
    
    void    makeSound() const;
    
protected :
    std::string _type;

};

#endif