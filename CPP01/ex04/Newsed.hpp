/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Newsed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:41:57 by kfortin           #+#    #+#             */
/*   Updated: 2024/05/26 20:19:27 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWSED_H
# define NEWSED_H
#include <iostream>
#include <fstream>
#include <string>

class newsed
{
    
public:
    newsed(std::string _s1, std::string _s2);
    ~newsed();
    
    void    setString1(std::string new_s1);
    std::string getString1(std::string _s1);
    void    setString2(std::string new_s2);
    std::string getString2(std::string _s2);
    void ft_copy_file(std::ifstream &fd1, std::ofstream &fd2);

private:
    std::string _s1;
    std::string _s2;
    
};


#endif