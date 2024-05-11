/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:02:02 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/11 15:02:04 by kfortin          ###   ########.fr       */
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