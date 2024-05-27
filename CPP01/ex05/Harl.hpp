/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:38 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/27 17:38:37 by kfortin          ###   ########.fr       */
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
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    typedef void (Harl::*Handlers)();
};


#endif