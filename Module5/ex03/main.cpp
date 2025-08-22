#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
    Intern somerandomintern;
    AForm* one;
    AForm* two;
    AForm* three;
    AForm* error;
    AForm* rorre;
    AForm* morre;
    AForm* corre;

    std::cout << "Asking the inter to create the forms" << std::endl;
    {
        try
        {
            one = somerandomintern.makeForm("RobotomyRequestForm", "Bender");
        }
        catch(Intern::InternException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            two = somerandomintern.makeForm("PresidentialPardonForm", "Trump");
        }
        catch(Intern::InternException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            three = somerandomintern.makeForm("ShrubberyCreationForm", "Mr Hanky");
        }
        catch(Intern::InternException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Asking the intern to create invalid form" << std::endl;
    {
        try
        {
            error = somerandomintern.makeForm("TROLOLO", "TRALALA");
        }
        catch(Intern::InternException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            rorre = somerandomintern.makeForm("Shart", "King Charles");
        }
        catch(Intern::InternException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "Final test" << std::endl;
    std::cout << "Create forms with intern and try to run it with Bureaucreat" <<  std::endl;
    Bureaucrat first("John Doe", 1);
    rorre = somerandomintern.makeForm("RobotomyRequestForm", "Optimus Prime");
    morre = somerandomintern.makeForm("PresidentialPardonForm", "Trump");
    corre = somerandomintern.makeForm("ShrubberyCreationForm", "Mr Hanky");

    std::cout << std::endl;
    std::cout << "John doe will try to sign and execute the 3 forms!" << std::endl;

    first.executeForm(*rorre);
    first.signForm(*rorre);
    first.executeForm(*rorre);
    std::cout << std::endl;
    first.executeForm(*morre);
    first.signForm(*morre);
    first.executeForm(*morre);
    std::cout << std::endl;
    first.executeForm(*corre);
    first.signForm(*corre);
    first.executeForm(*corre);
    std::cout << std::endl;

    delete one;
    delete two;
    delete three;
    delete rorre;
    delete morre;
    delete corre;
}