/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_Storage.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:25:44 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/20 15:51:01 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    ft_help_command()
{
    std::cout << std::endl << "Command (ADD, SEARCH, EXIT)" << std::endl;
    std::cout << std::endl << "Enter a command : " << std::endl;
}

void    PhoneBook::ft_print_all()
{
    std::cout << std::endl << "|INDEX_____|FIST_NAME_|LAST_NAME_|NICKNAME__|" << std::endl;
    for (int i = 0; i < _max_contact; i++)
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i].get_first_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i].get_last_name()) << "|";
        std::cout << std::setw(10) << ft_trim_string(_contact[i].get_nickname()) << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
    std::cout << std::endl;
}

bool    PhoneBook::ft_is_digit(std::string str)
{
    for (int i = 0; str[i]; i++)
        if (isdigit(str[i]))
            return false;
    return true;
}

void    PhoneBook::ft_check_storage()
{
    int i;

    i = 0;
    std::string input_1;
    ft_print_all();
    std::cout << "Select a index :" << std::endl;
    std::getline(std::cin, input_1);
    if (std::cin.eof())
        exit(1);
    if (input_1.length() == 0 || ft_is_digit(input_1))
    {
        std::cout << "----> Ivalid index - Restart the action" << std::endl << std::endl;
        return;
    }
    try
    {
        i = std::stoi(input_1.c_str());
        
    } 
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl << std::endl;
        return;
    }
    if (i > _max_contact || i <= 0)
    {
        std::cout << "----> Ivalid index - Restart the action" << std::endl << std::endl;
        return;
    }
    else
    {
        std::cout << " _fist_name : " << _contact[i - 1].get_first_name() << std::endl;
        std::cout << " _last_name : " << _contact[i - 1].get_last_name() << std::endl;
        std::cout << " _nickname : " << _contact[i - 1].get_nickname() << std::endl;
        std::cout << " _phone_number : " << _contact[i - 1].get_phone_number() << std::endl;
        std::cout << " _darkest_secret : " << _contact[i - 1].get_darkest_secret() << std::endl;
    }
}

std::string PhoneBook::ft_trim_string(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + '.');
    return (str);
}

bool    PhoneBook::ft_check_empty_input(std::string input)
{
    if (input.empty())
    {
        std::cout << "----> Invalid field - Restart the action" << std::endl << std::endl;
        return(false);
    }
    return (true);
}

void PhoneBook::ft_contact_switch(int i, std::string input)
{
    switch(i)
    {
        case FIRST: _contact[_nbr_contact].set_first_name(input);   break;
        case LAST: _contact[_nbr_contact].set_last_name(input);   break;
        case NICK: _contact[_nbr_contact].set_nickname(input);   break;
        case PHONE: _contact[_nbr_contact].set_phone_number(input);   break;
        case DARK: _contact[_nbr_contact].set_darkest_secret(input);   break;
    }
}

bool   PhoneBook::ft_insert_contact()
{
    std::string input_2;
        
    for(int i = 0; i < 5; i++)
    {
        ft_print_message(i);
        std::getline(std::cin, input_2);
        if (std::cin.eof())
            exit(1);
        if(ft_check_empty_input(input_2) == true)
            PhoneBook::ft_contact_switch(i, input_2);
        else
            return (1);
    }
    return (0);
}

void PhoneBook::add_contact()
{
    if (_max_contact < 8)
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
    std::string built_tab[5];
    
    built_tab[0] = "_fist_name";
    built_tab[1] = "_last_name";
    built_tab[2] = "_nickname";
    built_tab[3] = "_phone_number";
    built_tab[4] = "_darkest_secret";
    std::cout << "Enter your " << built_tab[i] << ": " << std::endl;
}
