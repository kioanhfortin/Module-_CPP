/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:19 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/20 11:21:17 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
# include <iostream>
# include <string>

#define RED         "\033[31m"
#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

class AForm;

class Bureaucrat
{

public :
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator = (const Bureaucrat &other);
    ~Bureaucrat();

    std::string get_name() const;
    unsigned int get_grade() const;
    void incrementeGrade();
    void decrementeGrade();
    
    void signForm(AForm &form);
    void executeForm(AForm const &form);
    
    class GradeTooHighException : public std::exception {
        public:
            const char *what(void) const throw();
    };
    
    class GradeTooLowException : public std::exception {
        public:
            const char *what(void) const throw();
    };
    
private :
    const std::string name_;
    unsigned int      grade_;

    Bureaucrat();
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &other);

#endif