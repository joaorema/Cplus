#include "PmergeMe.hpp"
#include <sys/time.h>
#include <iomanip>

double getTime()
{
    struct timeval time;
    gettimeofday(&time, NULL);
    return (time.tv_sec * 1000000.0 + time.tv_usec);
}

bool isValidNumber(const std::string &str)
{
    if(str.empty())
        return false;
    
    for(size_t i = 0; i < str.size(); ++i)
    {
        if(!std::isdigit(str[i]))
            return false;
    }
    
    // Check for overflow and valid range
    std::istringstream iss(str);
    long num;
    iss >> num;
    
    if(num < 0 || num > INT_MAX)
        return false;
    
    return true;
}

void printSequence(const std::string &label, const std::vector<int> &vec)
{
    std::cout << label;
    
    size_t displayLimit = 30;
    if(vec.size() <= displayLimit)
    {
        for(size_t i = 0; i < vec.size(); ++i)
            std::cout << vec[i] << " ";
    }
    else
    {
        for(size_t i = 0; i < displayLimit; ++i)
            std::cout << vec[i] << " ";
        std::cout << "[...]";
    }
    std::cout << std::endl;
}

int main(int ac, char *av[])
{
    if(ac < 2)
    {
        std::cerr << "Error: No arguments provided" << std::endl;
        return 1;
    }

    PmergeMe johnson;
    
    // Parse and validate all arguments
    for(int i = 1; i < ac; ++i)
    {
        std::string arg = av[i];
        
        if(!isValidNumber(arg))
        {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        
        int num = std::atoi(arg.c_str());
        johnson._vec.push_back(num);
        johnson._deq.push_back(num);
    }
    
    // Check for duplicates (optional - you can remove this if you allow duplicates)
    std::vector<int> temp = johnson._vec;
    std::sort(temp.begin(), temp.end());
    for(size_t i = 1; i < temp.size(); ++i)
    {
        if(temp[i] == temp[i-1])
        {
            std::cerr << "Error: Duplicate values not allowed" << std::endl;
            return 1;
        }
    }
    
    // Display unsorted sequence
    printSequence("Before: ", johnson._vec);
    
    // Sort with vector and measure time
    double startVec = getTime();
    johnson.recursiveParseVec(johnson._vec);
    double endVec = getTime();
    double timeVec = endVec - startVec;
    
    // Sort with deque and measure time
    double startDeq = getTime();
    johnson.recursiveParse(johnson._deq);
    double endDeq = getTime();
    double timeDeq = endDeq - startDeq;
    
    // Display sorted sequence
    printSequence("After:  ", johnson._vec);
    
    // Display timing information
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << johnson._vec.size() 
              << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << johnson._deq.size() 
              << " elements with std::deque  : " << timeDeq << " us" << std::endl;
    
    return 0;
}