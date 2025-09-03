#include "Templates.hpp"

#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


int main()
{
    std::cout << GREEN "First Swap Test :" RESET << std::endl;
    swap(2,5);

    std::cout << GREEN"Second Swap Test :"RESET  << std::endl;
    swap("Z", "b");
    std::cout << "Max test (A=99 B=56) " << max(99,56) << std::endl; 
    std::cout << "Min test (A=2.5 B=3.5) " << min(2.5,3.5) << std::endl;
    std::cout << "Max test with chars (A=b B=z) " << max("b","z") << std::endl;
    std::cout << "Min test with chars (A=b B=z) " << min("y","f") << std::endl;
}