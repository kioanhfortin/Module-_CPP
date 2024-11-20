/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:33 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 19:27:38 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("Default"), sign_(false), gradeSign_(150), gradeExec_(150) {}

Form::Form(const std::string name, unsigned int gradeSign, unsigned int gradeExec) : name_(name), sign_(false), gradeSign_(gradeSign), gradeExec_(gradeExec) {
    
    if (gradeSign < 1 || gradeExec < 1) {
        throw GradeTooHighException();
    }
    if (gradeSign > 150 || gradeExec > 150) {
        throw GradeTooLowException();
    }
}

Form::Form(const Form &other) : name_(other.name_), sign_(other.gradeSign_), gradeSign_(other.gradeSign_), gradeExec_(other.gradeExec_) {}

Form &Form::operator = (const Form &other) {
    if (this != &other)
    {
        gradeExec_ = other.gradeExec_;
        gradeSign_ = other.gradeSign_;
    }
    return *this;
}

Form::~Form() {}

std::string Form::get_name() const {
    return name_;
}

bool        Form::isSigned() const {
    return sign_;
}

unsigned int Form::get_gradeSign() const {
    return gradeSign_;
}

unsigned int Form::get_gradeExec() const {
    return gradeExec_;
}

void Form::beSigned(Bureaucrat name) {
    if (name.get_grade() > get_gradeSign())
        throw GradeTooLowException();
    sign_ = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade too High !";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade too Low !";
}

std::ostream &operator << (std::ostream &out, const Form &form) {
    std::cout  << "Form: " << form.get_name()
        << ", Signed: " << (form.isSigned() ? "Yes" : "No")
        << ", Sign Grade: " << form.get_gradeSign()
        << ", Execute Grade: " << form.get_gradeExec() << std::endl;
    return out;
}