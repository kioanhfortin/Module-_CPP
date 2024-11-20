/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:59:21 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 21:36:56 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
    Intern someRandomIntern;

    AForm* rrf; // RobotomyRequestForm
    AForm* scf; // ShrubberyCreationForm
    AForm* ppf; // PresidentialPardonForm
    AForm* unknown; // Formulaire inconnu

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        std::cout << "Form successfully created: " << rrf->get_name() << std::endl;
        delete rrf;
    }

    scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (scf) {
        std::cout << "Form successfully created: " << scf->get_name() << std::endl;
        delete scf;
    }

    ppf = someRandomIntern.makeForm("presidential pardon", "Bob");
    if (ppf) {
        std::cout << "Form successfully created: " << ppf->get_name() << std::endl;
        delete ppf;
    }

    unknown = someRandomIntern.makeForm("unknown form", "Target");
    if (!unknown) {
        std::cerr << "Form creation failed for unknown form." << std::endl;
    }

    return 0;
}