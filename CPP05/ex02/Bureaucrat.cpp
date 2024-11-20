/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:45 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 21:39:33 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name_(name), grade_(grade) {
    if (grade_ < 1) {
        throw GradeTooHighException();
    }
    if (grade_ > 150) {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_), grade_(other.grade_) {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other) {
    if (this != &other)
    {
        grade_ = other.grade_;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::get_name() const {
    return name_;
}

unsigned int Bureaucrat::get_grade() const {
    return grade_;
}

void Bureaucrat::incrementeGrade()
{
    if (grade_ <= 1)
    {
        throw GradeTooHighException();
    }
    --grade_;
}

void Bureaucrat::decrementeGrade()
{
    if (grade_ >= 150)
    {
        throw GradeTooLowException();
    }
    ++grade_;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too High !";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too Low !";
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &other) {
    std::cout  << WHITE << other.get_name() << ", bureaucrat grade " << other.get_grade() << "." << std::endl;
    return out;
}

void Bureaucrat::signForm(AForm &form)
{
    try {
        form.beSigned(*this);
        std::cout  << PINK << get_name() << " signed " << form.get_name() << WHITE << std::endl;
    } catch (const std::exception &e) {
        std::cout  << PINK << get_name() << " couldn't sign " << form.get_name() << " because "  << e.what() << WHITE << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) {
    try {
        form.execute(*this);
        std::cout  << PINK << get_name() << " executed " << form.get_name() << WHITE << std::endl;
    } catch (const std::exception &e) {
        std::cout  << PINK << get_name() << " couldn't executed " << form.get_name() << " because "  << e.what() << WHITE << std::endl;
    }
}