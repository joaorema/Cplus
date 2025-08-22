#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    {
        std::cout << "First Test" << std::endl;
        Bureaucrat one("John", 1);
        ShrubberyCreationForm first("tree");

        one.executeForm(first);
        one.signForm(first);
        one.executeForm(first);

    }
    std::cout << std::endl;
    {
        std::cout << RED"Second Test"RESET << std::endl;
        Bureaucrat two("Doe", 15);
        PresidentialPardonForm second("Forget!");

        two.executeForm(second);
        two.signForm(second);
        two.executeForm(second);
    }
    std::cout << std::endl;
    {
        std::cout << RED"Third Test"RESET << std::endl;
        Bureaucrat three("Jose", 1);
        RobotomyRequestForm third("Robot!");

        three.executeForm(third);
        three.signForm(third);
        three.executeForm(third);
    }
    std::cout << std::endl;
    std::cout << RED"Pointers Test"RESET << std::endl;
    {
        Bureaucrat one;
        Bureaucrat two("Pimpolho", 15);
        AForm* first = new PresidentialPardonForm("Ptr Pardon");

        one.executeForm(*first);
        one.signForm(*first);
        one.executeForm(*first);

        std::cout << std::endl;

        two.executeForm(*first);
        two.signForm(*first);
        two.executeForm(*first);
    }
    
    std::cout << "---------------------------------------------------------------" << std::endl;
    {
        Bureaucrat one;
        Bureaucrat two("Zarolho", 1);
        AForm* first = new RobotomyRequestForm("Ptr Robot!");

        one.executeForm(*first);
        one.signForm(*first);
        one.executeForm(*first);
        
        std::cout << std::endl;
    
        two.signForm(*first);
        two.executeForm(*first);
        
    }
}