/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:38 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 21:05:04 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    public :
        Form();
        Form(const std::string name, unsigned int gradeSign, unsigned int gradeExec);
        Form(const Form &other);
        Form &operator = (const Form &other);
        ~Form();

        std::string get_name() const;
        bool        isSigned() const;
        unsigned int get_gradeSign() const;
        unsigned int get_gradeExec() const;
        void beSigned(Bureaucrat name); //check if grade bureau upper than the gradeform
        void signForm(Bureaucrat name);

        class GradeTooHighException : public std::exception {
            public:
                const char *what(void) const throw();
        };
    
        class GradeTooLowException : public std::exception {
            public:
                const char *what(void) const throw();
        };
    private :
        std::string const       name_;
        bool                    sign_;
        unsigned int            gradeSign_;
        unsigned int            gradeExec_;

};

std::ostream &operator << (std::ostream &out, const Form &form);

#endif