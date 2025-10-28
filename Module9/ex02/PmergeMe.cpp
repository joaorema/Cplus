#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{   
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::parseAc(std::string &input)
{
    for(std::string::iterator it = input.begin(); it != input.end(); ++it)
    {
        if(!isdigit(*it) && *it != ' ')
            return false;
        
        std::istringstream iss(input);
        int num;
        while(iss >> num)
        {
            if(num > 1000 ||  num < 0)
                return false;
        }

    }
    return true;
}

void PmergeMe::addintoDeq(std::string &input)
{
    this->_deq.assign(input.begin(), input.end());
}

void PmergeMe::addintoVec(std::string &input)
{
    this
}

/*
PmergeMe::PmergeMe(const PmergeMe& other)
{

}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{

}

void PmergeMe::addNumber(int n)
{

}

void PmergeMe::sort()
{

}

void PmergeMe::print()const
{
    
}
*/

