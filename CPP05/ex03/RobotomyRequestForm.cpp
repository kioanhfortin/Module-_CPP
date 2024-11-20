/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:05:20 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 20:22:25 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target_("Default Target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target_(other.target_){}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &other) {
    (void)other;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (isSigned() == false)
        throw AForm::ExecuteNotSigned();
    if (this->get_gradeExec() < executor.get_grade())
        throw AForm::GradeTooLowException();

    std::cout << PURPLE << "BBZZZZZRRZZZZBB !!!" << WHITE << std::endl;

    std::srand(std::time(nullptr));
    bool res = std::rand() % 2;
    if (res)
        std::cout << target_ << " have been successfully Robotomize !" << std::endl;
    else
        std::cout << "Robotomie apply on " << target_ << " failed !" << std::endl;
}