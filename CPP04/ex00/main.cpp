/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:03:43 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 18:50:30 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal("samere");
    const Animal* j = new Dog("ok");
    const Animal* i = new Cat();
    
    Animal lion("Lion");
    
    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    std::cout << lion.get_type() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    lion.makeSound();

    delete(j);
    delete(i);
    delete(meta);
    return 0;
}
