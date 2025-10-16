#include <iostream>
#include <string>
#include "Data.hpp"


int main(int ac, char **av)
{
    Data database("data.csv");  //assing file to make db
    if(ac != 2)
    {
        std::cout << "Invalid nbr of arguments!. Try ./btc file" << std::endl;
        return 0;
    }
    else
    {   
        database.checkData(av[1]);  
        return 1;
    }
}