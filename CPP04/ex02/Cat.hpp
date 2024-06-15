/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:06:49 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:50:48 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    
public :
    Cat();
    Cat(std::string type);
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
    ~Cat();
    
    void makeSound() const;
    void set_brain(int index, const std::string idea);
    std::string get_brain(int index) const;

private:
    Brain* brain;
};

#endif
