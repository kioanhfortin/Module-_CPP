/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:03:43 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:47:30 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* meta = new Animal("Thinggy");
    const Animal* j = new Dog("Doggo");
    const Animal* i = new Cat();
    Dog lion("Lion");
    
    std::cout << j->get_type() << std::endl;
    std::cout << i->get_type() << std::endl;
    std::cout << lion.get_type() << std::endl << std::endl;
    
    lion.set_brain(0, "EAT");
    std::cout << "Idea no 0 " << lion.get_type() << " " << lion.get_brain(0) << std::endl << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    lion.makeSound();

    delete(meta);
    delete(j);
    delete(i);
    
    return 0;
}
