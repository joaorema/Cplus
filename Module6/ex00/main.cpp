#include <iostream>
#include <string>
#include "ScalarConverter.hpp"


int main(int ac, char *av[])
{
    if(ac != 2)
    {
        std::cout << "Invalid nbr of arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
    
}