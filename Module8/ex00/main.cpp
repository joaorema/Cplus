#include "easyfind.hpp"
#include <vector>


#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

int main()
{
    std::vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(15);

    std::cout << GREEN"Vector contains: "RESET << numbers[0] 
              << " " << numbers[1] 
              << " " << numbers[2]
              << " " << numbers[3] 
              << std::endl;

    std::cout << GREEN"Lets try to find 2 in the container"RESET << std::endl;
    ::find_value(numbers, 2);
    std::cout << std::endl;
    std::cout << GREEN"Lets try to find 7 in the container"RESET << std::endl;
    ::find_value(numbers, 7);
    std::cout << std::endl;
    std::cout << GREEN"Lets try to find 16 in the container"RESET << std::endl;
    ::find_value(numbers, 16);
    std::cout << std::endl;
    std::cout << GREEN"Lets try to find 42 in the container"RESET << std::endl;
    ::find_value(numbers, 42);
    std::cout << std::endl;
    
    
}