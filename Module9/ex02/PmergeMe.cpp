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
        if(token.size() > 4)
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

// ==================== DEQUE IMPLEMENTATION ====================

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
            std::swap(x, y);
        a.push_back(x);
        b.push_back(y);
    }

    // If odd element size, save the straggler
    bool hasStraggler = (element.size() % 2 != 0);
    int straggler = 0;
    if(hasStraggler)
        straggler = element.back();
    
    // Recursive call on b elements (larger elements)
    recursiveParse(b);

    // Build main chain and pend chain
    std::deque<int> main;
    std::deque<int> pend;

    // Main starts with first element of a (smallest overall)
    if(!a.empty())
        main.push_back(a[0]);
    
    // Then all b elements go into main
    for(size_t i = 0; i < b.size(); ++i)
        main.push_back(b[i]);
    
    // Remaining a elements (a[1] onwards) go into pend
    for(size_t i = 1; i < a.size(); ++i)
        pend.push_back(a[i]);
    
    // Add straggler to pend if it exists
    if(hasStraggler)
        pend.push_back(straggler);

    // Insert pend elements using Jacobsthal sequence
    jacobInsert(main, pend);
 
    element = main;
}

void PmergeMe::binaryInsert(std::deque<int> &main, int value)
{
    int left = 0;
    int right = main.size();

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

std::vector<int> PmergeMe::generateJacob(size_t limit)
{
    std::vector<int> sequence;
    sequence.push_back(0);
    sequence.push_back(1);

    while(sequence.back() < (int)limit)
    {
        int next = sequence[sequence.size() - 1] + 2 * sequence[sequence.size() - 2];
        sequence.push_back(next);
    }
    return sequence;
}

void PmergeMe::jacobInsert(std::deque<int> &main, std::deque<int> &pend)
{
    if(pend.empty())
        return;

    std::vector<int> jacob = generateJacob(pend.size() + 2);
    std::vector<bool> inserted(pend.size(), false);

    for(size_t j = 2; j < jacob.size(); ++j)
    {
        int current = jacob[j];
        int previous = jacob[j - 1];

        if(current > (int)pend.size())
            current = pend.size();
        
        // Insert in reverse order between current and previous
        for(int i = current - 1; i >= previous && i >= 0; --i)
        {
            if(!inserted[i])
            {
                binaryInsert(main, pend[i]);
                inserted[i] = true;
            }
        }
        
        if(current >= (int)pend.size())
            break;
    }

    // Insert any remaining elements not covered by Jacobsthal sequence
    for(size_t i = 0; i < pend.size(); ++i)
    {
        if(!inserted[i])
        {
            binaryInsert(main, pend[i]);
            inserted[i] = true;
        }
    }
}

// ==================== VECTOR IMPLEMENTATION ====================

void PmergeMe::recursiveParseVec(std::vector<int> &element)
{
    if(element.size() <= 1)
        return;
    
    std::vector<int> a, b;
    for(size_t i = 0; i + 1 < element.size(); i += 2)
    {
        int x = element[i];
        int y = element[i + 1];
        if(x > y)
            std::swap(x, y);
        a.push_back(x);
        b.push_back(y);
    }

    bool hasStraggler = (element.size() % 2 != 0);
    int straggler = 0;
    if(hasStraggler)
        straggler = element.back();
    
    recursiveParseVec(b);

    std::vector<int> main;
    std::vector<int> pend;

    if(!a.empty())
        main.push_back(a[0]);
    
    for(size_t i = 0; i < b.size(); ++i)
        main.push_back(b[i]);
    
    for(size_t i = 1; i < a.size(); ++i)
        pend.push_back(a[i]);
    
    if(hasStraggler)
        pend.push_back(straggler);

    jacobInsertVec(main, pend);
 
    element = main;
}

void PmergeMe::binaryInsertVec(std::vector<int> &main, int value)
{
    int left = 0;
    int right = main.size();

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

void PmergeMe::jacobInsertVec(std::vector<int> &main, std::vector<int> &pend)
{
    if(pend.empty())
        return;

    std::vector<int> jacob = generateJacob(pend.size() + 2);
    std::vector<bool> inserted(pend.size(), false);

    for(size_t j = 2; j < jacob.size(); ++j)
    {
        int current = jacob[j];
        int previous = jacob[j - 1];

        if(current > (int)pend.size())
            current = pend.size();
        
        for(int i = current - 1; i >= previous && i >= 0; --i)
        {
            if(!inserted[i])
            {
                binaryInsertVec(main, pend[i]);
                inserted[i] = true;
            }
        }
        
        if(current >= (int)pend.size())
            break;
    }

    for(size_t i = 0; i < pend.size(); ++i)
    {
        if(!inserted[i])
        {
            binaryInsertVec(main, pend[i]);
            inserted[i] = true;
        }
    }
}