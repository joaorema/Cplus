#include "Array.hpp"

#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


int main()
{
    {
        Array<int> one(5);              //starting array of ints with 5 nbrs inside
        Array<int> two(5);
        two = one;
        std::cout << GREEN"First Test : Array int"RESET << std::endl;
        std::cout << "Lets Print Array one" << std::endl;
        for(int i = 0; i < one.size(); i++)
        {
            std::cout << one[i] << std::endl;
        }
        std::cout << GREEN"Lets check if copy worked"RESET << std::endl;
        for (int i = 0; i < two.size(); i++)
        {
            try
            {
                std::cout << two[i] << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Invalid Index" << std::endl;
            }
            
        }
        std::cout << GREEN"Lets apply some changes to array one"RESET << std::endl;
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
        two = one;
        std::cout << GREEN"Lets copy after updating array"RESET << std::endl;
        for (int i = 0; i < two.size(); i++)
        {
            try
            {
                std::cout << two[i] << std::endl;
            }
            catch(const std::exception& e)
            {
                 std::cout << "Invalid Index" << std::endl;
            }
            
        }
        std::cout << "Lets change one value in first array and check if changes the copy" << std::endl;
        {
            int i = 1;
            one[i] = 50;
            std::cout << "Value in Array one in [i] : " << one[i] << std::endl;
            std::cout << "Value in Array two in [i] : " << two[i] << std::endl;
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
        std::cout << GREEN"Third Test : Array strings (Lets check one invalid index)"RESET << std::endl;
        for(int i = 0; i < text.size() + 1; i++)
        {
            try
            {
                text[i] = 'a' + i;
                std::cout << text[i] << std::endl;
            }
            catch(std::exception &e)
            {
                std::cout << RED"Invalid Index"RESET << std::endl;
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