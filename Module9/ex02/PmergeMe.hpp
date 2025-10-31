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

        void swapBlocks(std::deque<int> &d, size_t pos1, size_t pos2, size_t blockSize);
        void pairSortLevel(std::deque<int> &d, size_t blockSize);        
        void recursivePairSort(std::deque<int> &d, size_t blockSize);
        void recursiveParse(std::deque<int>& element);
        void binaryInsert(std::deque<int> &main, int value);
        void jacobInsert(std::deque<int> &main, std::deque<int> &pend);
        std::vector<int>generateJacob(size_t limit);

};