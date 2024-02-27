/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:41:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/26 21:01:04 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iomanip> 
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
    int max_contact;
    Contact contact[8];
    
private:

};

// PhoneBook    ft_print_end(PhoneBook inst1, int i, int _maxChar);
// int   ft_print_space(int nb_sp, int _maxChar);
void    ft_check_storage(PhoneBook inst1);
void    ft_print_message(int i);
// PhoneBook    ft_insert_contact(PhoneBook inst1, std::string input, int index);
// void ft_erase_contact(PhoneBook inst1, std::string input);

#endif