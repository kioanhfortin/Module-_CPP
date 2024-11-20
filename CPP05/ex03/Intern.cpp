#include "Intern.hpp"

Intern::Intern() {}

Intern(const Intern &other) { (void)other; }

Intern &operator = (const Intern &other) {
  (void)other;
  return *this;
}

~Intern() {}

 AForm *makeForm(const std::string &formName, const std::string &target) {
    std::string formType[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    Form *(*formCreators[])(const std::string &) = {
        createRobotomyRequest,
        createShrubberyCreation,
        createPresidentialPardon
    };

    for (size_t i = 0; i < 3; i++) {
        if (formName[i] == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cerr << "Error: Form " << forName << " does not exist." << std::endl;
    return nullptr;
}