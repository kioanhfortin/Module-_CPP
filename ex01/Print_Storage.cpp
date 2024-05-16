/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Storage.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:25:44 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/16 16:08:25 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    ft_help_command()
{
    std::cout << std::endl << "Command (ADD, SEARCH, EXIT)" << std::endl;
    std::cout << std::endl << "Enter a command : " << std::endl;
}

void    PhoneBook::ft_check_storage()
{
    int i;

    i = 0;
    std::string input_1;
    std::cout << "Select a index :" << std::endl;
    std::getline(std::cin, input_1);
    if (std::cin.eof())
        exit(1);
    i = std::stoi(input_1.c_str());
    if (i > _max_contact || i <= 0)
    {
        std::cout << "----> Ivalid index - Restart the action" << std::endl << std::endl;
        return;
    }
    else
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i - 1].get_first_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i - 1].get_last_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i - 1].get_nickname()) << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
}

std::string PhoneBook::ft_trim_string(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + '.');
    return (str);
}

bool    PhoneBook::ft_check_empty_input()
{
    if (_input.empty())
    {
        std::cout << "----> Invalid field - Restart the action" << std::endl << std::endl;
        return(false);
    }
    return (true);
}

void PhoneBook::ft_contact_switch(int i)
{
    switch(i)
    {
        case FIRST: _contact[_nbr_contact].set_first_name(_input);   break;
        case LAST: _contact[_nbr_contact].set_last_name(_input);   break;
        case NICK: _contact[_nbr_contact].set_nickname(_input);   break;
        case PHONE: _contact[_nbr_contact].set_phone_number(_input);   break;
        case DARK: _contact[_nbr_contact].set_darkest_secret(_input);   break;
    }
}

bool   PhoneBook::ft_insert_contact()
{
    int i;
        
    i = 0;
    while(i < 5)
    {
        ft_print_message(i);
        std::getline(std::cin, _input);
        if (std::cin.eof())
            exit(1);
        if(ft_check_empty_input() == true)
            PhoneBook::ft_contact_switch(i);
        else
            return (1);
        i++;
    }
    return (0);
}

void PhoneBook::add_contact()
{
    if (_nbr_contact < 8)
    {
        if (ft_insert_contact() == 1)
            return;
        _max_contact++;
        _nbr_contact++;
    }
    else
    {
        if (_nbr_contact == 8)
            _nbr_contact = 0;
        if (ft_insert_contact() == 1)
            return;
        _nbr_contact++;
    }
}

void    PhoneBook::ft_print_message(int i)
{
    char *built_tab[5];
    
    built_tab[0] = (char *)"_fist_name";
    built_tab[1] = (char *)"_last_name";
    built_tab[2] = (char *)"_nickname";
    built_tab[3] = (char *)"_phone_number";
    built_tab[4] = (char *)"_darkest_secret";
    std::cout << "Enter your " << built_tab[i] << ": " << std::endl;
}
