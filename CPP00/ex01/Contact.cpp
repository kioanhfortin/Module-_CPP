/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:30:07 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/16 14:49:59 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_first_name(const std::string new_first_name)
{
    _first_name = new_first_name;
}

void Contact::set_last_name(const std::string new_last_name)
{
    _last_name = new_last_name;
}

void Contact::set_nickname(const std::string new_nickname)
{
    _nickname = new_nickname;
}

void Contact::set_phone_number(const std::string new_phone_number)
{
    _phone_number = new_phone_number;
}

void Contact::set_darkest_secret(const std::string new_darkest_secret) {
    _darkest_secret = new_darkest_secret;
}

std::string Contact::get_first_name() const
{
    return _first_name;
}

std::string Contact::get_last_name() const
{
    return _last_name;
}

std::string Contact::get_nickname() const
{
    return _nickname;
}

std::string Contact::get_phone_number() const
{
    return _phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return _darkest_secret;
}

Contact::Contact(void){
    
    std::cout << "Contact Contructor called" << std::endl;

    return;
}

Contact::~Contact(void){
    
    std::cout << "Contact Destructor called" << std::endl;

    return;
}
