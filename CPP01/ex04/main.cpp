/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:18:16 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 16:07:43 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Newsed.hpp"

void newsed::ft_copy_file(std::ifstream fd1, std::ofstream fd2)
{
    (void)fd2;
    int c;
    while (fd1 != EOF)
    {
        if (c == newsed::getString1(newsed::_s1))
            // go_check_all_str(*c);
        else
            fd2 << c;
    }
    std::cout << fd2 << std::endl;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ifstream fd1(argv[1]);
        if (!fd1)
        {
            std::perror("File opening fd1 failed");
            return EXIT_FAILURE;
        }
        std::string str = std::string(argv[1]) + ".replace";
        std::ofstream fd2(str.c_str());
        if (!fd2)
        {
            std::perror("File opening fd2 failed");
            return EXIT_FAILURE;
        }
        newsed sed = newsed(argv[2], argv[3]);
        ft_copy_file(fd1, fd2);
        fd1.close();
        fd2.close();
    }
    return 0;
}