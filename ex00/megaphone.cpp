/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:09:16 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/20 12:48:02 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;

    i = 1;
    std::string str;
    if (argc > 1)
    {
        while (i < argc)
        {
            str = argv[i];
            transform(str.begin(), str.end(), str.begin(), toupper);
            std ::cout << str;
            i++;
        }
        std ::cout << std::endl;
    }
    else
        std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
}