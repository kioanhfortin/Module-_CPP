/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 20:22:25 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target_("Default Target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target_(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target_(other.target_){}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other) {
    (void)other;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (isSigned() == false)
        throw AForm::ExecuteNotSigned();
    if (this->get_gradeExec() < executor.get_grade())
        throw AForm::GradeTooLowException();

    std::cout << PURPLE << target_<< " was forgiven by Zaphod Beeblebrox !!!" << WHITE << std::endl;
} 