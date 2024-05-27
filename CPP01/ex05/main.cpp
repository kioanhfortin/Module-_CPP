/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:18:16 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/27 17:42:12 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string tab[4];
    Handlers Handlers[4];

    tab[0] = "DEBUG";
    tab[1] = "INFO";
    tab[2] = "WARNING";
    tab[3] = "ERROR";
    
    Handlers[0] = &Harl::debug;
    Handlers[1] = &Harl::info;
    Handlers[2] = &Harl::warning;
    Handlers[3] = &Harl::error;

    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i])
        {
            (this->*Handlers[i])();
            return;
        }
    }
    std::cerr << "Invalid level" << std::endl;
}

int main()
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("NIKE");
    harl.complain("ERROR");
    return 0;
}