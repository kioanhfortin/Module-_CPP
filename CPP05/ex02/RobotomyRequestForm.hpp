/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:24 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 20:22:53 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define PURPLE      "\x1B[35m"
#define WHITE       "\033[37m"

class RobotomyRequestForm : public AForm {
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
    
        void execute(Bureaucrat const &executor) const;
    private :
        const std::string target_;
        
};

#endif
