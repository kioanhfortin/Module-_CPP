/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:03:43 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 19:07:17 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Dog* j = new Dog("doggo");
    Cat* i = new Cat("meooo");
    // Animal k("wrong");
    
    delete(j);
    delete(i);
    
    return 0;
}
