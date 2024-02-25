/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:41:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/25 15:47:42 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
// #include <string.h>

class PhoneBook
{

public:
    PhoneBook(void);
    ~PhoneBook(void);
    
    PhoneBook add_contact(PhoneBook inst1);
    std::string search_contact(PhoneBook);
    int nbr_contact;
    int index[8];
    Contact contact[8];
    
private:

};

void    ft_check_storage(PhoneBook inst1);
void    ft_print_message(int i);
PhoneBook    set_index(PhoneBook inst1);
PhoneBook    ft_insert_contact(PhoneBook inst1, std::string input, int index);
void ft_erase_contact(PhoneBook inst1, std::string input);

#endif