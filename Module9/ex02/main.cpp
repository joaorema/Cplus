#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    if(ac != 2)
    {
        std::cerr << "invalid nbr of arguments!" << std::endl;
        return 1;
    }
    PmergeMe johnson;
    std::string str = av[1];
    if(johnson.parseAc(str) == false)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    johnson.addintoVec(str);
    johnson.addintoDeq(str);
    std::cout << "Original deque" << std::endl;
    johnson.printDeq();


    johnson.recursivePairSort(johnson._deq, 1);
    std::cout << "After recursive Pair Sort " << std::endl;
    johnson.printDeq();
    



}