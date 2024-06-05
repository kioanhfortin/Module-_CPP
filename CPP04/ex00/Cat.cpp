/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:13:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/05 17:16:41 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat " << get_type() << " default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat " << get_type() << " Destructor called" << std::endl;
}