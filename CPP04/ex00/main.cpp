/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:03:43 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/11 17:40:20 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
// #include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    const Animal* i = new Cat();

    // std::cout << j->get_type() << " " << std::endl;
    // std::cout << i->get_type() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();

    // delete(j);
    delete(i);
    delete(meta);
    return 0;
}
