#include <cctype>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>
#include <iostream>
#include "Iter.hpp"


#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

static void add(int& nbr)
{
    nbr = nbr + 5;
}

static void sub(int& nbr)
{
    nbr = nbr - 5;
}

static void capitalize(std::string &str)
{
    for(int i = 0; i < static_cast<int>(str.length()); i++)
    {
        if(std::islower(str[i]))
            str[i] = str[i] - 32;
    }
}

static void decapitalize(std::string &str)
{
     for(int i = 0; i < static_cast<int>(str.length()); i++)
    {
        if(std::isupper(str[i]))
            str[i] = str[i] + 32;
    }
}


int main()
{
    {
        int array[] = {2, 5, 7, 9};
        ::iter(array, 4, add);
        std::cout << GREEN"First test : add +5 to (2, 5 ,7 ,9)"RESET << std::endl;
        for(int i = 0; i < 4; i++)
        {
            std::cout << array[i] << " ; ";
        }
        std::cout << std::endl;
    }
    {
        int array2[] = {2, 5, 7, 9};
        ::iter(array2, 4, sub);
        std::cout << GREEN"Second test : sub -5 to (2, 5 ,7 ,9)"RESET << std::endl;
        for(int i = 0; i < 4; i++)
        {
            std::cout << array2[i] << " ; ";
        }
        std::cout << std::endl;
    }
    {
        std::string array3[] = {"ola", "how are you doing?", "bye"};
        ::iter(array3, 3, capitalize);
        std::cout << GREEN"Third test : capitalize (ola, how are you doing?, bye)"RESET << std::endl;
        for(int i = 0; i < 3; i++)
        {
            std::cout << array3[i] << " ; ";
        }
        std::cout << std::endl;
    }
    {
        std::string array4[] = {"OLA", "HOW ARE YOU DOING", "ByE"};
        ::iter(array4, 3, decapitalize);
        std::cout << GREEN"Last test : decapitalize (OLA, HOW ARE YOU DOING, Bye)"RESET << std::endl;
        for(int i = 0; i < 3; i++)
        {
            std::cout << array4[i] << " ; ";
        }
        std::cout << std::endl;

    }

}