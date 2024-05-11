/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:15:52 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 01:06:25 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool    PhoneBook::ft_check_empty_input()
{
    if (input.empty())
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
        case FIRST: contact[nbr_contact].set_first_name(input);   break;
        case LAST: contact[nbr_contact].set_last_name(input);   break;
        case NICK: contact[nbr_contact].set_nickname(input);   break;
        case PHONE: contact[nbr_contact].set_phone_number(input);   break;
        case DARK: contact[nbr_contact].set_darkest_secret(input);   break;
    }
}

bool   PhoneBook::ft_insert_contact()
{
    int i;
        
    i = 0;
    while(i < 5)
    {
        ft_print_message(i);
        i++;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        if(ft_check_empty_input() == true)
            PhoneBook::ft_contact_switch(i);
        else
            return (1);
    }
    return (0);
}

void PhoneBook::add_contact()
{
    if (nbr_contact < 8)
    {
        if (ft_insert_contact() == 1)
            return;
        max_contact++;
        nbr_contact++;
    }
    else
    {
        if (nbr_contact == 8)
            nbr_contact = 0;
        if (ft_insert_contact() == 1)
            return;
        nbr_contact++;
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

void    ft_help_command()
{
    std::cout << std::endl << "Command (ADD, SEARCH, EXIT)" << std::endl;
    std::cout << std::endl << "Enter a command : " << std::endl;
}
