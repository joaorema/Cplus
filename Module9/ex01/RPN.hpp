#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>
#include <cctype>

class RPN
{
    private:


    public:
        RPN(const char *str);
        ~RPN();

        int addToStack();
        void trim();
        int getResult()const;
        std::string     _string;
        std::stack<int> _stack;
        
};
