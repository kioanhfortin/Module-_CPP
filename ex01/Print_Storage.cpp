/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Storage.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:25:44 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 01:24:55 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void ft_print_info(Contact contact, in)
// {
//     std::cout << nbr_contact << "_first_name: " << contact.get_first_name() << std::endl;
//     std::cout << "_last_name: " << contact.get_last_name() << std::endl;
//     std::cout << "_nickname: " << contact.get_nickname() << std::endl;
//     std::cout << "_phone_number: " << contact.get_phone_number() << std::endl;
//     std::cout << "_darkest_secret: " << contact.get_darkest_secret() << std::endl << std::endl;
// }

// int   ft_print_space(int nb_sp, int _maxChar)
// {
    // std::cout << "lalals " << nb_sp;
    // for(int i = 0; i < nb_sp; i++)
    // {
    //     std::cout << i << " ";
    //     _maxChar--;
    // }
    // return _maxChar;
// }

// PhoneBook    ft_print_end(PhoneBook inst1, int i, int _maxChar)
// {
//     std::cout << "lenth " << strlen(inst1.contact[i].get_first_name().c_str());
//     std::cout << "max_char " << _maxChar;
//     if (_maxChar <= 0)
//         std::cout << ". | ";
//     else
//     {
//         if (_maxChar > 0)
//             _maxChar = ft_print_space(strlen(inst1.contact[i].get_first_name().c_str()) - _maxChar, _maxChar);
//         std::cout << " | ";
//     }
//     return inst1;
// }

void    PhoneBook::ft_check_storage()
{
    int i;

    i = 0;
    std::string input;
    std::cout << "Select a index :" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(1);
    if (atoi(input.c_str()) > max_contact || atoi(input.c_str()) <= 0)
    {
        std::cout << "----> Ivalid index - Restart the action" << std::endl << std::endl;
        return;
    }
    else
    {
        i = atoi(input.c_str());
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