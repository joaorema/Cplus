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

        //std::vector<int> forJohnsonSort(const std::vector<int> &vector);

    public:
        PmergeMe();
        ~PmergeMe();

        std::vector<int> _vec;
        std::deque<int> _deq;


        //PmergeMe(const PmergeMe& other);
        //PmergeMe& operator=(const PmergeMe& other);

        //void addNumber(int n);
        //void sort();
        //void print()const;
        bool parseAc(std::string &input);
        void addintoVec(std::string &input);
        void addintoDeq(std::string &input);

        void printVeq();
        void printDeq();

        void swapBlocks(std::deque<int> &d, size_t pos1, size_t pos2, size_t blockSize);
        void pairSortLevel(std::deque<int> &d, size_t blockSize);        
        void recursivePairSort(std::deque<int> &d, size_t blockSize);
};