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

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat highRank("HighRankBureaucrat", 1);

        ShrubberyCreationForm shrubberyForm("Garden");
        RobotomyRequestForm robotomyForm("Alice");
        PresidentialPardonForm pardonForm("Bob");

        std::cout << LIME << "\n--- Tentative de signer et exécuter ShrubberyCreationForm ---\n" << WHITE;
        highRank.signForm(shrubberyForm);
        highRank.executeForm(shrubberyForm);

        std::cout << LIME << "\n--- Tentative de signer et exécuter RobotomyRequestForm ---\n" << WHITE;
        highRank.signForm(robotomyForm);
        highRank.executeForm(robotomyForm);

        std::cout << LIME << "\n--- Tentative de signer et exécuter PresidentialPardonForm ---\n" << WHITE;
        highRank.signForm(pardonForm);
        highRank.executeForm(pardonForm);

    } catch (std::exception &e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    try {
        Bureaucrat lowRank("LowRankBureaucrat", 150);

        ShrubberyCreationForm shrubberyForm("Park");

        std::cout << LIME << "\n--- Tentative avec un bureaucrate au grade insuffisant ---\n" << WHITE;
        lowRank.signForm(shrubberyForm);
        lowRank.executeForm(shrubberyForm);

    } catch (std::exception &e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}