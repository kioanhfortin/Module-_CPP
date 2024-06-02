/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:15:52 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/16 16:07:26 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
    
    std::cout << "PhoneBook Contructor called" << std::endl;

    return;
}

PhoneBook::~PhoneBook(void){
    
    std::cout << "PhoneBook Destructor called" << std::endl;

    return;
}

std::string PhoneBook::get_input() const{
    return _input;
}

bool    PhoneBook::read_input()
{
    if (std::getline(std::cin, this->_input))
        return true;
    return false;
}

void PhoneBook::set_input(const std::string &input) {
    _input = input;
}
