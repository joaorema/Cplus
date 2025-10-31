#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <sstream>
#include <string>
#include <deque>

class PmergeMe
{
    private:
        
    public:
        PmergeMe();
        ~PmergeMe();
        std::vector<int> _vec;
        std::deque<int> _deq;
    
        bool parseAc(std::string &input);
        void addintoVec(std::string &input);
        void addintoDeq(std::string &input);
        void printVeq();
        void printDeq();
        
        // Deque sorting functions
        void recursiveParse(std::deque<int>& element);
        void binaryInsert(std::deque<int> &main, int value);
        void jacobInsert(std::deque<int> &main, std::deque<int> &pend);
        
        // Vector sorting functions
        void recursiveParseVec(std::vector<int>& element);
        void binaryInsertVec(std::vector<int> &main, int value);
        void jacobInsertVec(std::vector<int> &main, std::vector<int> &pend);
        
        // Shared utility
        std::vector<int> generateJacob(size_t limit);
};

#endif