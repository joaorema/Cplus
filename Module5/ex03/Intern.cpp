#include "Intern.hpp"
#include <string>

Intern::Intern()
{
    std::cout << "Intern deployed" << std::endl;
}

Intern::~Intern()
{
   // std::cout << "Intern destroyed" << std::endl;
}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

const char* Intern::InternException:: what() const throw()
{
    return(RED"This form is not valid!"RESET);
}


AForm* Intern::makeForm(std::string form, std::string target)
{
    const int nbr = 3;
    int index = -1;
    std::string array[nbr] = 
    {
        "PresidentialPardonForm",
        "RobotomyRequestForm",
        "ShrubberyCreationForm"
    };
    for(int i = 0; i < nbr; i++)
    {
        if(array[i] == form)
        {
            index = i;
            break;
        }
    }
    if(index != -1)
        std::cout << GREEN "Intern creates " RESET;
    switch(index)
    {
        case 0: return new PresidentialPardonForm(target);
        case 1: return new RobotomyRequestForm(target);
        case 2: return new ShrubberyCreationForm(target);
        default : throw InternException();
    }
    
}