#include "Array.hpp"

#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


int main()
{
    {
        Array<int> one(5);              //starting array of ints with 5 nbrs inside
        std::cout << GREEN"First Test : Array int"RESET << std::endl;
        for (int i = 0; i < one.size(); i++)
        {
            try
            {
                one[i] = i * 5;
                std::cout << one[i] << std::endl;
            }
            catch(std::exception &e)
            {
                std::cout << "Invalid Index" << std::endl;
            }
        }
    }
    {
        Array<double> two(3);              //starting array of ints with 5 nbrs inside
        std::cout << GREEN"First Test : Array double"RESET << std::endl;
        for (int i = 0; i < two.size(); i++)
        {
            try
            {
                two[i] = 500 * 5 * i;
                std::cout << two[i] << std::endl;
            }
            catch(std::exception &e)
            {
                std::cout << "Invalid Index" << std::endl;
            }
        }
    }
    {
        Array<std::string> text(5);
        std::cout << GREEN"Third Test : Array strings"RESET << std::endl;
        for(int i = 0; i < text.size(); i++)
        {
            try
            {
                text[i] = 'a' + i;
                std::cout << text[i] << std::endl;
            }
            catch(std::exception &e)
            {
                std::cout << "Invalid Index" << std::endl;
            }
        }
    }
    {
        std::cout << GREEN"Test from subject "RESET << std::endl;
        int * a = new int();
        std::cout << *a << std::endl;
        delete a;
    }
    


}