/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:33 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 19:27:38 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name_("Default"), sign_(false), gradeSign_(150), gradeExec_(150) {}

AForm::AForm(const std::string name, unsigned int gradeSign, unsigned int gradeExec) : name_(name), sign_(false), gradeSign_(gradeSign), gradeExec_(gradeExec) {
    
    if (gradeSign < 1 || gradeExec < 1) {
        throw GradeTooHighException();
    }
    if (gradeSign > 150 || gradeExec > 150) {
        throw GradeTooLowException();
    }
}

AForm::AForm(const AForm &other) : name_(other.name_), sign_(other.gradeSign_), gradeSign_(other.gradeSign_), gradeExec_(other.gradeExec_) {}

AForm &AForm::operator = (const AForm &other) {
    if (this != &other)
    {
        gradeExec_ = other.gradeExec_;
        gradeSign_ = other.gradeSign_;
    }
    return *this;
}

AForm::~AForm() {}

std::string AForm::get_name() const {
    return name_;
}

bool        AForm::isSigned() const {
    return sign_;
}

unsigned int AForm::get_gradeSign() const {
    return gradeSign_;
}

unsigned int AForm::get_gradeExec() const {
    return gradeExec_;
}

void AForm::beSigned(Bureaucrat name) {
    if (name.get_grade() > get_gradeSign())
        throw GradeTooLowException();
    sign_ = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade too High !";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade too Low !";
}

const char *AForm::ExecuteNotSigned::what() const throw() {
    return "Form is Not Signed !";
}

std::ostream &operator << (std::ostream &out, const AForm &AForm) {
    std::cout  << "AForm: " << AForm.get_name()
        << ", Signed: " << (AForm.isSigned() ? "Yes" : "No")
        << ", Sign Grade: " << AForm.get_gradeSign()
        << ", Execute Grade: " << AForm.get_gradeExec() << std::endl;
    return out;
}