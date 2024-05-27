/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:38 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 20:44:13 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
#include <iostream>
#include <fstream>
#include <string>

class Harl
{
    
public:
    void complain(std::string level);
    void get_debug() {};
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};


#endif