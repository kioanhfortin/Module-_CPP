/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:40:41 by kfortin           #+#    #+#             */
/*   Updated: 2024/02/21 16:55:10 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

void capitalize_cpp(char *str)
{
    size_t i;
    size_t len;

    len = strlen(str);
    for (i = 0; i < len; i++)
        std ::cout << (char)toupper(str[i]);
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            capitalize_cpp(argv[i]);
            i++;
        }
    }
    else
        std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
}
