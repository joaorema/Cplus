#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    //lets first parse the arguments in ac/av
    if(ac != 2)
    {
        std::cerr << "invalid nbr of arguments!" << std::endl;
        return 1;
    }
    //first we parse
    PmergeMe teste;
    std::string str = av[1];
    if(teste.parseAc(str) == false)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    teste.addintoDeq(str);
    



}