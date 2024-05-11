/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:41:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 00:56:48 by kfortin          ###   ########.fr       */
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
    enum infoType { FIRST, LAST, NICK, PHONE, DARK};
    void   add_contact();
    bool   ft_insert_contact();
void ft_contact_switch(int i);
    std::string search_contact();
    void    ft_check_storage();
    void    ft_print_message(int i);
    bool    ft_check_empty_input();

    std::string input;
    int nbr_contact;
    int max_contact;
    Contact contact[8];
    
private:

};

// PhoneBook    ft_print_end(PhoneBook inst1, int i, int _maxChar);
// int   ft_print_space(int nb_sp, int _maxChar);
// void ft_erase_contact(PhoneBook inst1, std::string input);

#endif