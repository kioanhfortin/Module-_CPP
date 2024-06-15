/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:03:43 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:25:40 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal("Thinggy");
    const Animal* j = new Dog("Doggo");
    const Animal* i = new Cat();
    Animal lion("Lion");
    
    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    std::cout << lion.get_type() << " " << std::endl;
    
    // const WrongAnimal* meta2 = new WrongAnimal("Wrong Thinggy");
    // const WrongAnimal* k = new WrongCat("Wrong kitty");

    // meta2->makeSound();
    // k->makeSound();
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    lion.makeSound();

    delete(j);
    delete(i);
    delete(meta);
    // delete(meta2);
    // delete(k);
    
    return 0;
}
