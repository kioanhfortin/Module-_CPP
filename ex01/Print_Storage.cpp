/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Storage.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:25:44 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 14:48:42 by kfortin          ###   ########.fr       */
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
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << ft_trim_string(contact[i - 1].get_first_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(contact[i - 1].get_last_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(contact[i - 1].get_nickname()) << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
}

std::string PhoneBook::ft_trim_string(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + '.');
    return (str);
}