#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{   
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::parseAc(std::string &input)
{
    std::istringstream iss(input);
    std::string token;

    while(iss >> token)
    {
        for(std::string::size_type i = 0; i < token.size(); ++i)
        {
            if(!std::isdigit(token[i]))
                return false;
        }
        if(token.size() > 4)  //values bigger than 1000
            return false;
        
        std::istringstream nbrstr(token);
        int num;
        nbrstr >> num;
        if(num < 0 || num > 1000)
            return false;
    }
    return true;
}

void PmergeMe::addintoDeq(std::string &input)
{
    std::stringstream ss(input);
    int num;
    while(ss >> num)
    {
        this->_deq.push_back(num);
    }    
}


void PmergeMe::addintoVec(std::string &input)
{
    std::stringstream ss(input);
    int num;
    while(ss >> num)
    {
        this->_vec.push_back(num);
    }
}

void PmergeMe::printDeq()
{  
    std::cout << "Values in Deque: ";
    for(std::deque<int>::iterator it = this->_deq.begin(); it != this->_deq.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

void PmergeMe::printVeq()
{
    std::cout << "Values in Vector: ";
    for(std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}


void PmergeMe::swapBlocks(std::deque<int> &d, size_t pos1, size_t pos2, size_t blockSize)
{
    // swap two blocks of length blockSize that start at pos1 and pos2 (pos2 = pos1 + blockSize)
    for(size_t i = 0; i < blockSize; ++i)
    {
        int temp = d[pos1 + i];
        d[pos1 + i] = d[pos2 + i];
        d[pos2 + i] = temp;
    }
}

// compare representative elements (the last element of each block): idx = start + blockSize - 1 and start + 2*blockSize - 1
void PmergeMe::pairSortLevel(std::deque<int> &d, size_t blockSize)
{
    size_t n = d.size();
    for(size_t start = 0; start + 2 * blockSize <= n; start += 2 * blockSize)
    {
        size_t left = start + blockSize - 1;        // last index of left block
        size_t right = start + 2 * blockSize - 1;   // last index of right block
        if( d[left] > d[right])
        {
            swapBlocks(d, start, start + blockSize, blockSize);
        }
    }
}

void PmergeMe::recursivePairSort(std::deque<int> &d, size_t blockSize)
{
    if(2 * blockSize > d.size() || blockSize == 0)
        return;
    
    pairSortLevel(d, blockSize);
    recursivePairSort(d, blockSize * 2);
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

