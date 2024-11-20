#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) { (void)other; }

Intern &Intern::operator = (const Intern &other) {
  (void)other;
  return *this;
}

Intern::~Intern() {}

static AForm *createRobotomyRequest(const std::string &target) {
    return new RobotomyRequestForm(target);
}

static AForm *createShrubberyCreation(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

static AForm *createPresidentialPardon(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) {
    std::string formType[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    AForm *(*formCreators[])(const std::string &) = {
        createRobotomyRequest,
        createShrubberyCreation,
        createPresidentialPardon
    };

    for (size_t i = 0; i < 3; i++) {
        if (formType[i] == formName) {
            std::cout << LIME << "Intern creates " << formName << WHITE << std::endl;
            return formCreators[i](target);
        }
    }
    return nullptr;
}