/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:59:21 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/20 10:46:29 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern someRandomIntern;

    AForm* RobotomyRequestForm;
    AForm* ShrubberyCreationForm;
    AForm* PresidentialPardonForm;
    AForm* unknown;

    RobotomyRequestForm = someRandomIntern.makeForm("robotomy request", "Bender");
    if (RobotomyRequestForm) {
        std::cout << PINK << "Form successfully created: " << RobotomyRequestForm->get_name() << WHITE << std::endl;
        delete RobotomyRequestForm;
    }

    ShrubberyCreationForm = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (ShrubberyCreationForm) {
        std::cout << PINK << "Form successfully created: " << ShrubberyCreationForm->get_name() << WHITE << std::endl;
        delete ShrubberyCreationForm;
    }

    PresidentialPardonForm = someRandomIntern.makeForm("presidential pardon", "Bob");
    if (PresidentialPardonForm) {
        std::cout << PINK << "Form successfully created: " << PresidentialPardonForm->get_name() << WHITE << std::endl;
        delete PresidentialPardonForm;
    }

    unknown = someRandomIntern.makeForm("unknown form", "Target");
    if (!unknown) {
        std::cerr << PINK << "Form creation failed for unknown form." << WHITE << std::endl;
    }

    return 0;
}