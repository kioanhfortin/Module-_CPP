/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:45 by kfortin           #+#    #+#             */
/*   Updated: 2024/11/19 19:26:18 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150) {
    // std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Default Constructor called\n" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name_(name), grade_(grade) {
    if (grade_ < 1) {
        throw GradeTooHighException();
    }
    if (grade_ > 150) {
        throw GradeTooLowException();
    }
    // std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Constructor called\n" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_), grade_(other.grade_) {
    // std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Copy constructor called\n" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other) {
    if (this != &other)
    {
        grade_ = other.grade_;
    }
    // std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << "Copy assignment operator called\n" << std::endl;
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

void Bureaucrat::signForm(Form &form)
{
    try {
        form.beSigned(*this);
        std::cout  << PINK << get_name() << " signed " << form.get_name() << std::endl;
    } catch (const std::exception &e) {
        std::cout  << PINK << get_name() << " couldn't sign " << form.get_name() << " because "  << e.what() << "." << std::endl;
    }
}