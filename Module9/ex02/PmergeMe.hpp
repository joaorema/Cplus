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
        std::vector<int> _vec;
        std::deque<int> _deq;

        //std::vector<int> forJohnsonSort(const std::vector<int> &vector);

    public:
        PmergeMe();
        ~PmergeMe();


        //PmergeMe(const PmergeMe& other);
        //PmergeMe& operator=(const PmergeMe& other);

        //void addNumber(int n);
        //void sort();
        //void print()const;
        bool parseAc(std::string &input);
        void addintoVec(std::string &input);
        void addintoDeq(std::string &input);
        
};