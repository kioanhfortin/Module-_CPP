/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:41:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/16 14:35:51 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>

class Contact
{

public:
    Contact(void);
    ~Contact(void);

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
    
    void set_first_name(const std::string new_first_nam);
    void set_last_name(const std::string new_last_name);
    void set_nickname(const std::string new_nickname);
    void set_phone_number(const std::string new_phone_number);
    void set_darkest_secret(const std::string new_darkest_secret);
    
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
    
};

void    ft_help_command();

#endif