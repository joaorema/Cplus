#include "Bureaucrat.hpp"


int main()
{
    {
        std::cout << GREEN "First Test" RESET << std::endl;
        Bureaucrat one("John", 42);
        std::cout << one << std::endl;
        try
        {
            one.decrement();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << GREEN "After decrement" RESET << std::endl;
        std::cout << one << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << GREEN "Second Test" RESET << std::endl;
        Bureaucrat two("Doe", 99);
        std::cout << two << std::endl;
        try
        {
            two.increment();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << GREEN "After increment" RESET << std::endl;
        std::cout << two << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << GREEN "Third Test" RESET << std::endl;
        Bureaucrat temp("Angel", 15);
        Bureaucrat test;
        test = temp;
        std::cout << test << std::endl;
        try
        {
            test.decrement();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << GREEN "After decrement" RESET << std::endl;
        std::cout << test << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << GREEN "Final increment test" RESET << std::endl;
        Bureaucrat lasti("Obama", 5);
        std::cout << lasti << std::endl;
        while(1)
        {
            try
            {
                lasti.increment();
            }
            catch(std::exception &e)
            {
                std::cout << e.what() << std::endl;
                return 1;
            }
            std::cout << GREEN "After increment" RESET << std::endl;
            std::cout << lasti << std::endl;
        }
    }
    /*  Extra tests
    std::cout << std::endl;
    {
        std::cout << GREEN "Final decrement test" RESET << std::endl;
        Bureaucrat lastd("Trump", 143);
        std::cout << lastd << std::endl;
        while(1)
        {
            try
            {
                lastd.decrement();
            }
            catch(std::exception &e)
            {
                std::cout << e.what() << std::endl;
                return 1;
            }
            std::cout << GREEN "After decrement" RESET << std::endl;
            std::cout << lastd << std::endl;
        }
    }
    */
    /*
    {
        try
        {
            Bureaucrat five("hello", 151);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return 1;
        }

    }
    */
    return 0;
}