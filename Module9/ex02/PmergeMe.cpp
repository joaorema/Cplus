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

//step 2
void PmergeMe::recursiveParse(std::deque<int> &element)
{
    if(element.size() <= 1)
        return;
    
    std::deque<int> a, b;
    for(size_t i = 0; i + 1 < element.size(); i += 2)
    {
        int x = element[i];
        int y = element[i + 1];
        if(x > y)
            std::swap(x,y);
        a.push_back(x);
        b.push_back(y);
    }

    //if odd element size
    if(element.size() % 2 != 0)
        a.push_back(element.back());
    
    //recursive call on b elements
    recursiveParse(b);

    //start main and pend
    std::deque<int> main;
    std::deque<int> pend;

    if(!b.empty())
    {
        main.push_back(b.front());
        if(!a.empty())
            main.push_back(a.front());
    }
    for(size_t i = 1; i < b.size(); ++i)
    {
        pend.push_back(b[i]);
    }

    for(size_t i = 1; i < a.size(); ++i)
    {
        pend.push_back(a[i]);
    }

   
    jacobInsert(main, pend);
 
    element = main;
}


void PmergeMe::binaryInsert(std::deque<int> &main, int value)
{
    int left = 0;
    int right = main.size();

    //binary search to find correct position
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(value < main[mid])
            right = mid;
        else
            left = mid + 1;
    }
    main.insert(main.begin() + left, value);
}


//step 3
std::vector<int> PmergeMe::generateJacob(size_t limit)
{
    std::vector<int> sequence;
    sequence.push_back(0);
    sequence.push_back(1);

    while(sequence.back() < (int)limit)
    {
        int next = sequence[sequence.size() - 1] + 2 *sequence[sequence.size() - 2];
        sequence.push_back(next);
    }
    return sequence;
}

void PmergeMe::jacobInsert(std::deque<int> &main, std::deque<int> &pend)
{
    std::vector<int> jacob = generateJacob(pend.size() + 2);

    for(size_t j = 2; j < jacob.size(); ++j)
    {
        int current = jacob[j];
        int previous = jacob[j - 1];

        if(current > (int)pend.size())
            current = pend.size();
        
        // Insert in reverse between (curr-1) and (prev)
        for(int i = current - 1; i >= previous &&  i >= 0; --i)
        {
            binaryInsert(main, pend[i]);
        }
        if(current == (int)pend.size())
            break;
        
        // If any pend elements remain (not inserted by Jacobsthal groups)
        for (int i = pend.size() - 1; i >= 0; --i)
            binaryInsert(main, pend[i]);

    }


}

