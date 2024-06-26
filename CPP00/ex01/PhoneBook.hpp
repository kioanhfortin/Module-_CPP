/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:41:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/06/02 12:05:59 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iomanip> 
# include <iostream>
# include <string>
# include <ctype.h>

class PhoneBook
{

public:
    PhoneBook(void);
    ~PhoneBook(void);
    enum    infoType { FIRST, LAST, NICK, PHONE, DARK};
    void    add_contact();
    bool    ft_insert_contact();
    void    ft_contact_switch(int i, std::string input);
    std::string ft_trim_string(const std::string &str);
    bool    ft_is_digit(std::string str);
    void    ft_check_storage();
    void    ft_print_all();
    void    ft_print_message(int i);
    bool    ft_check_empty_input(std::string input);

    std::string get_input() const;
    bool    read_input();
    void    set_input(const std::string &input);

private:
    std::string _input;
    int _nbr_contact;
    int _max_contact;
    Contact _contact[8];
};

#endif