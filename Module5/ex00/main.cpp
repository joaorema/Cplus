#include "Bureaucrat.hpp"


int main()
{
    Bureaucrat a("John", 3);
    Bureaucrat b("Doe", 100);

    std::cout << a << std::endl; 
    std::cout << b << std::endl; 

    std::cout << GREEN "Increment test" RESET<< std::endl;
    a.increment();
    std::cout << a << std::endl;
    b.increment();
    std::cout << b << std::endl;

    std::cout << GREEN "Decrement test" RESET<< std::endl;
    a.decrement();
    std::cout << a << std::endl;
    b.decrement();
    std::cout << b << std::endl;

    
    return 0;
}