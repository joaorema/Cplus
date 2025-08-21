#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        std::cout << "First Test" << std::endl;
        Bureaucrat one("John", 150);
        ShrubberyCreationForm first("tree");

        one.executeForm(first);
        one.signForm(first);
        one.executeForm(first);

    }
}