#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

#define PURPLE      "\x1B[35m"
#define WHITE       "\033[37m"

class Intern
{
    public :
        Intern();
        Intern(const Intern &other);
        Intern &operator = (const Intern &other);
        ~Intern();

        AForm *makeForm(const std::string &formName, const std::string &target);

    private :

};

#endif