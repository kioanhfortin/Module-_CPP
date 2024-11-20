/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:59:21 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 19:23:43 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 150);

        Form highLevelForm("HighLevelForm", 1, 1);
        Form lowLevelForm("LowLevelForm", 150, 150);

        std::cout << LIME << "\nDisplaying forms:" << WHITE << std::endl;
        std::cout << highLevelForm << std::endl;
        std::cout << lowLevelForm << std::endl;

        std::cout << LIME << "\nAlice tries to sign the forms:" << WHITE << std::endl;
        alice.signForm(highLevelForm);
        alice.signForm(lowLevelForm);

        std::cout << LIME << "\nBob tries to sign the forms:" << WHITE << std::endl;
        bob.signForm(highLevelForm);
        bob.signForm(lowLevelForm);

        std::cout << LIME << "\nDisplaying forms after signing attempts:" << WHITE << std::endl;
        std::cout << highLevelForm << std::endl;
        std::cout << lowLevelForm << std::endl;

        std::cout << LIME << "\nTest creation of forms with invalid grades:" << WHITE << std::endl;
        try {
            Form invalidHigh("InvalidHigh", 0, 10);
        } catch (const std::exception &e) {
            std::cout << PINK << "Exception caught: " << e.what() << WHITE << std::endl;
        }

        try {
            Form invalidLow("InvalidLow", 200, 150);
        } catch (const std::exception &e) {
            std::cout << PINK << "Exception caught: " << e.what() << WHITE << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}