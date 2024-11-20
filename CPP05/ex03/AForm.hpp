/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:38 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/20 10:40:10 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
    public :
        AForm(const std::string name, unsigned int gradeSign, unsigned int gradeExec);
        AForm(const AForm &other);
        AForm &operator = (const AForm &other);
        virtual ~AForm();

        std::string get_name() const;
        bool        isSigned() const;
        unsigned int get_gradeSign() const;
        unsigned int get_gradeExec() const;
        
        void beSigned(Bureaucrat name);
        void signAForm(Bureaucrat name);

        virtual void execute(Bureaucrat const &executor) const = 0;
        
        class GradeTooHighException : public std::exception {
            public:
                const char *what(void) const throw();
        };
    
        class GradeTooLowException : public std::exception {
            public:
                const char *what(void) const throw();
        };
        
        class ExecuteNotSigned : public std::exception {
            public:
                const char *what(void) const throw();
        };
        
    private :
        std::string const       name_;
        bool                    sign_;
        unsigned int            gradeSign_;
        unsigned int            gradeExec_;

        AForm();
};

std::ostream &operator << (std::ostream &out, const AForm &AForm);

#endif