/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Constructor_Destructor.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:11:07 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/25 11:11:39 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void){
    
    std::cout << "Contact Contructor called" << std::endl;

    return;
}

Contact::~Contact(void){
    
    std::cout << "Contact Destructor called" << std::endl;

    return;
}

PhoneBook::PhoneBook(void){
    
    std::cout << "PhoneBook Contructor called" << std::endl;

    return;
}

PhoneBook::~PhoneBook(void){
    
    std::cout << "PhoneBook Destructor called" << std::endl;

    return;
}