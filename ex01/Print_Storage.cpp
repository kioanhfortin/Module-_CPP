/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Storage.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:25:44 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 01:35:17 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::ft_check_storage()
{
    int i;

    i = 0;
    std::string input;
    std::cout << "Select a index :" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(1);
    i = atoi(input.c_str());
    if (i > max_contact || i <= 0)
    {
        std::cout << "----> Ivalid index - Restart the action" << std::endl << std::endl;
        return;
    }
    else
    {
        std::string firstName = contact[i - 1].get_first_name().substr(0, 10);
        if (strlen(contact[i].get_first_name().c_str()) > 10)
            firstName[10 - 1] = '.';
        std::string lastName = contact[i - 1].get_last_name().substr(0, 10);
        if (strlen(contact[i].get_last_name().c_str()) > 10)
            lastName[10 - 1] = '.';
        std::string nickName = contact[i - 1].get_nickname().substr(0, 10);
        if (strlen(contact[i].get_nickname().c_str()) > 10)
            nickName[10 - 1] = '.';
        std::cout << "|-----------|----------|----------|---------|" << std::endl;
        std::cout << std::setw(10) << i << "| ";
        std::cout << std::setw(10) << firstName << " | ";
        std::cout << std::setw(10) << lastName << " | ";
        std::cout << std::setw(10) << nickName << " |" << std::endl;
        std::cout << "|-----------|----------|----------|---------|" << std::endl;
    }
}