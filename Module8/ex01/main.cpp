#include "Span.hpp"


#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


int main()
{
    {
        std::cout << GREEN"First Test "RESET << std::endl;

        Span one = Span(7);
        std::cout << GREEN"Class Span created with size 7"RESET << std::endl;
        std::cout << GREEN"Lets add 7 values"RESET << std::endl;
        try
        {
            one.addNumber(6);
            one.addNumber(3);
            one.addNumber(17);
            one.addNumber(9);
            one.addNumber(11);
            one.addNumber(42);
            one.addNumber(10);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << GREEN"Lets check if add is working"RESET << std::endl;
        std::cout << one << std::endl;
        std::cout << std::endl;
        std::cout << GREEN"Lets check shortest span"RESET << std::endl;
        std::cout << one.shortestSpan() << std::endl;
        std::cout << std::endl;
        std::cout << GREEN"Lets check longest span"RESET << std::endl;
        std::cout << one.longestSpan() << std::endl;
        std::cout << std::endl;

        std::cout << GREEN"Lets try to add more values"RESET << std::endl;
        try
        {
            one.addNumber(69);
            one.addNumber(96);
            
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        } 
        std::cout << one << std::endl;

    }
    std::cout << std::endl;
    {
        std::cout << GREEN"Lets try our add multiple numbers on a new Vector with size 100"RESET << std::endl;
        Span two(100);
        two.addMultipleNumbers(0, 100);
        std::cout << two << std::endl;
        std::cout << std::endl;
        std::cout << GREEN"To finish lets try to add some more"RESET << std::endl;
        try
        {
            two.addMultipleNumbers(100, 105); 
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    std::cout << std::endl;
    {
        std::cout << GREEN"Final test. Shortest span on vector with 1 value only"RESET << std::endl;
        Span three(1);
        three.addNumber(42);
        try
        {
            std::cout << three.shortestSpan() << std::endl;
            
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }

}