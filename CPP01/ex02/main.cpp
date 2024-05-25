/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:46:13 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/25 13:37:40 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Address_String : "<< &str << std::endl;
    std::cout << "Address_StringPTR : " << stringPTR << std::endl;
    std::cout << "Address_StringREF : " << &stringREF << std::endl << std::endl;

    std::cout << "Valeur_String : "<< str << std::endl;
    std::cout << "Valeur_StringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur_StringREF : " << stringREF << std::endl;

    return 0;
}