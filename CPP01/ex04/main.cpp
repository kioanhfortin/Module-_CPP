/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:18:16 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 20:21:30 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Newsed.hpp"

void newsed::ft_copy_file(std::ifstream &fd1, std::ofstream &fd2)
{
    std::string line;
    while(std::getline(fd1, line))
    {
        std::string new_line;
        std::size_t pos = 0;
        std::size_t prev_pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos)
        {
            new_line.append(line, prev_pos, pos - prev_pos);
            new_line.append(_s2);
            pos += _s1.length();
            prev_pos = pos;
        }
        new_line.append(line, prev_pos, std::string::npos);

        fd2 << new_line << '\n';
    }
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ifstream fd1(argv[1]);
        if (!fd1.is_open())
        {
            std::perror("File opening fd1 failed");
            return EXIT_FAILURE;
        }
        std::string str = (std::string)argv[1] + ".replace";
        std::ofstream fd2(str.c_str());
        if (!fd2.is_open())
        {
            std::perror("File opening fd2 failed");
            return EXIT_FAILURE;
        }
        newsed sed = newsed(argv[2], argv[3]);
        sed.ft_copy_file(fd1, fd2);
        
        fd1.close();
        fd2.close();
    }
    return 0;
}