/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:24 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 20:22:53 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

#define PURPLE      "\x1B[35m"
#define WHITE       "\033[37m"

class PresidentialPardonForm : public AForm {
    public :
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
        virtual ~PresidentialPardonForm();
        
        void execute(Bureaucrat const &executor) const;
    private :
        const std::string target_;
        
        PresidentialPardonForm();
};

#endif
