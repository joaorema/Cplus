#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    Form one("Exame", 100, 50);
    Form two("42 Query", 150, 150);
    Form three("Super Exame", 10, 10);

    Bureaucrat thing("John", 5);
    Bureaucrat thong("Doe", 25);
    Bureaucrat though("Mariza", 125);
    Bureaucrat last;

    last = thong;

    std::cout << thing << std::endl;
    std::cout << thong << std::endl;
    std::cout << though << std::endl;
    std::cout << last << std::endl;
    

    std::cout << GREEN "Trying to sign to Exame (100)" << RESET << std::endl;
    thing.signForm(one);
    thong.signForm(one);
    though.signForm(one);
    last.signForm(one);

    std::cout << std::endl;

    std::cout << GREEN "Trying to sign to 42 Query (150)" << RESET << std::endl;
    thing.signForm(two);
    thong.signForm(two);
    though.signForm(two);
    last.signForm(two);

    std::cout << std::endl;
    
    std::cout << GREEN "Trying to sign to Super Exame (10)" << RESET << std::endl;
    thing.signForm(three);
    thong.signForm(three);
    though.signForm(three);
    last.signForm(three);
    return 0;

}