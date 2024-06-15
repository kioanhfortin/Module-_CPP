/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:57:47 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:43:02 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog " << get_type() << " Default Constructor is called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type), brain(new Brain())
{
    std::cout << "Dog " << get_type() << " Constructor is called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog " << get_type() << " Copy constructor called" << std::endl;   
}

Dog &Dog::operator = (const Dog &other)
{
    if (this != &other)
    {
        _type = other._type;
        *brain = *other.brain;
    }
    std::cout << "Dog " << get_type() << " Copy assignment operator called" << std::endl;
    return *this;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog " << get_type() << " Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "WAOOFF " << get_type() << std::endl; 
}

void Dog::set_brain(int index, const std::string idea)
{
    brain->set_ideas(index, idea);   
}

std::string Dog::get_brain(int index) const
{
    return brain->get_ideas(index);
}