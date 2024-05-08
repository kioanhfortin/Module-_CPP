/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:15:52 by kfortin           #+#    #+#             */
/*   Updated: 2024/03/10 16:22:21 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook    ft_insert_contact(PhoneBook inst1, std::string input, int index)
{
        int i;
        
        i = 0;
        ft_print_message(i++);
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        inst1.contact[index].set_first_name(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        inst1.contact[index].set_last_name(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        inst1.contact[index].set_nickname(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        inst1.contact[index].set_phone_number(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        inst1.contact[index].set_darkest_secret(input);

        return inst1;
}

PhoneBook add_contact(PhoneBook inst1)
{
    std::string input;
 
    if (inst1.nbr_contact < 8)
    {
        inst1 = ft_insert_contact(inst1, input, inst1.nbr_contact);
        inst1.max_contact++;
        inst1.nbr_contact++;
    }
    else
    {
        if (inst1.nbr_contact == 8)
            inst1.nbr_contact = 0;
        inst1 = ft_insert_contact(inst1, input, inst1.nbr_contact);
    }
    return inst1;
}

void    ft_print_message(int i)
{
    char *built_tab[5];
    
    built_tab[0] = (char *)"_fist_name";
    built_tab[1] = (char *)"_last_name";
    built_tab[2] = (char *)"_nickname";
    built_tab[3] = (char *)"_phone_number";
    built_tab[4] = (char *)"_darkest_secret";
    std::cout << "Enter your " << built_tab[i] << ": " << std::endl;
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        std::cout << "Too much argument" << std::endl;
        return 1; 
    }

    PhoneBook  inst1;
    std::string input;
    inst1.nbr_contact = 0;
    inst1.max_contact = 0;
    std::cout << std::endl << "*** Your PhoneBook is now open ! " << std::endl;
    std::cout << "Command (ADD, SEARCH, EXIT)" << std::endl;
    std::cout << std::endl << "Enter a command : " << std::endl;
    while (std::getline(std::cin, input) != NULL || !std::cin.eof())
    {
        if (input == "EXIT")
            break;
        if (input == "ADD")
            inst1 = add_contact(inst1);
        if (input == "SEARCH")
            ft_check_storage(inst1);
    }
    return 0;   
}