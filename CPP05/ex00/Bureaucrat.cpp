#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150) {
    std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Default Constructor called\n" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade) {
    if (grade_ < 1) {
        throw GradeTooHighException();
    }
    if (grade_ > 150) {
        throw GradeTooLowException();
    }
    std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Constructor called\n" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_), grade_(other.grade_) {
    std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << " Copy constructor called\n" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other) {
    if (this != &other)
    {
        grade_ = other.grade_;
    }
    std::cout << WHITE << "Bureaucrat " << name_ << " " << grade_ << "Copy assignment operator called\n" << std::endl;
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