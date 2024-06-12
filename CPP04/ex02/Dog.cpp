/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:57:47 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 16:34:12 by kfortin          ###   ########.fr       */
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
    std::string tab[2] = {"Cat", "Dog"};
    std::string sound[2] = {"MEAOWWW", "WOOAAFF"};

    for (int i = 0; i < 2; i++)
    {
        if (_type == tab[i])
        {
            std::cout << sound[i] << std::endl;
            return ;
        }
    }
    std::cout << "Brrrbrrr sound of " << get_type() << std::endl; 
}