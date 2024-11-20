/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 21:36:20 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target_("Default Target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target_(other.target_){}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other) {
    (void)other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (isSigned() == false)
        throw AForm::ExecuteNotSigned();
    if (this->get_gradeExec() < executor.get_grade())
        throw AForm::GradeTooLowException();
    
    std::ofstream file(executor.get_name() + "_shubbery");
    if (!file.is_open()) {
        throw std::ios_base::failure("Failed to create shrubbery file");
    }
    file << "         *\n";
    file << "        ***\n";
    file << "       *****\n";
    file << "      *******\n";
    file << "     *********\n";
    file << "    ***********\n";
    file << "       |||||\n";
    file << "       |||||\n";

    file.close();
    
    std::cout << PURPLE << "         *\n"
              << "        ***\n"
              << "       *****\n"
              << "      *******\n"
              << "     *********\n"
              << "    ***********\n"
              << "       |||||\n"
              << "       |||||\n"
              << WHITE << std::endl;
}
