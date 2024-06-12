/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:45:04 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/12 15:26:47 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator= (const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::set_ideas(int index, const std::string idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::get_ideas(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}