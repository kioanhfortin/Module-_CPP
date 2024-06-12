/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:06:49 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 18:49:59 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat : public Animal
{
    
public :
    Cat();
    Cat(const std::string type);
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
    ~Cat();
    
private:
    
};

#endif