/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 18:52:59 by kfortin          ###   ########.fr       */
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