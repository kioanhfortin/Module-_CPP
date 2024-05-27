/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Newsed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:30:51 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 20:39:06 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Newsed.hpp"

newsed::newsed(std::string _s1, std::string _s2) : _s1(_s1), _s2(_s2)
{
    std::cout << "newsed Constructor called" << std::endl;
}

newsed::~newsed()
{
    std::cout << "newsed Destructor called" << std::endl;
}

void    newsed::setString1(std::string new_s1)
{
    _s1 = new_s1;
}

std::string newsed::getString1(std::string _s1)
{
    return (_s1);
}

void    newsed::setString2(std::string new_s2)
{
    _s2 = new_s2;
}

std::string newsed::getString2(std::string _s2)
{
    return (_s2);
}