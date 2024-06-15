/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/15 12:48:56 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat " << get_type() << " Default Constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type), brain(new Brain())
{
    std::cout << "Cat " << get_type() << " Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat " << get_type() << " Copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &other)
{
    if (this != &other)
    {
        _type = other._type;
        *brain = *other.brain;
    }
    std::cout << "Cat " << get_type() << " Copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat " << get_type() << " Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "MEOWWW " << get_type() << std::endl; 
}

void Cat::set_brain(int index, const std::string idea)
{
    brain->set_ideas(index, idea);   
}

std::string Cat::get_brain(int index) const
{
    return brain->get_ideas(index);
}