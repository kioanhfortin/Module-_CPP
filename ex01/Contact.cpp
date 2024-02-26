/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:15:52 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/26 15:31:46 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:40:41 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/21 17:14:53 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook    ft_insert_contact(PhoneBook inst1, std::string input, int index)
{
        int i;
        
        i = 0;
        ft_print_message(i++);
        std::getline(std::cin, input);
        inst1.contact[index].set_first_name(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        inst1.contact[index].set_last_name(input);
        std::getline(std::cin, input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        inst1.contact[index].set_nickname(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        inst1.contact[index].set_phone_number(input);
        ft_print_message(i++);
        std::getline(std::cin, input);
        inst1.contact[index].set_darkest_secret(input);

        return inst1;
}

PhoneBook add_contact(PhoneBook inst1)
{
    std::string input;
    // int i;

    // i = 0;
    if (inst1.nbr_contact < 8)
    {
        inst1 = ft_insert_contact(inst1, input, inst1.nbr_contact);

        inst1.nbr_contact++;
    }
    // else replace last contact;
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

void ft_print_info(Contact contact)
{
    std::cout << "_first_name: " << contact.get_first_name() << std::endl;
    std::cout << "_last_name: " << contact.get_last_name() << std::endl;
    std::cout << "_nickname: " << contact.get_nickname() << std::endl;
    std::cout << "_phone_number: " << contact.get_phone_number() << std::endl;
    std::cout << "_darkest_secret: " << contact.get_darkest_secret() << std::endl << std::endl;
}

void    ft_check_storage(PhoneBook inst1)
{
    for (int i = 0; i < inst1.nbr_contact; i++)
    {
        ft_print_info(inst1.contact[i]);
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    PhoneBook  inst1;
    std::string input;
    inst1.nbr_contact = 0;
    std::cout << std::endl << "*** Your PhoneBook is now open ! " << std::endl;
    std::cout << "Command (ADD, SEARCH, EXIT)" << std::endl;
    std::cout << std::endl << "Enter a command : " << std::endl;
    while (std::getline(std::cin, input))
    {
        if (input == "EXIT")
            break;
        if (input == "ADD")
            inst1 = add_contact(inst1);
    }
    ft_check_storage(inst1);
    return 0;   
}
        // if (std::cin.eof())
        //     return (1);