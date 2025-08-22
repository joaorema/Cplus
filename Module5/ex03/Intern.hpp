#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
    public:
        Intern();
        ~Intern();

        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        AForm* makeForm(std::string form, std::string target);

        class InternException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
};