/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:24 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/20 11:33:38 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

#define PURPLE      "\x1B[35m"
#define WHITE       "\033[37m"

class ShrubberyCreationForm : public AForm {
    public :
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
    
        void execute(Bureaucrat const &executor) const;
    private :
        const std::string target_;
        
        ShrubberyCreationForm();
};

#endif
