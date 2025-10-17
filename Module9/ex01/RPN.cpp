#include "RPN.hpp"


RPN::RPN(const char *str)
{
    if(str)
        _string = str;
}

RPN::~RPN()
{
}

void RPN::trim()
{
    std::string result;
    for(std::string::iterator it = this->_string.begin(); it != this->_string.end(); ++it)
    {
        if(*it != ' ')      //while not spaces 
            result += *it;
    }
    this->_string = result;
    
}

int RPN::addToStack()
{
    
    for(std::string::iterator it = this->_string.begin(); it != this->_string.end(); ++it)
    {
        if(isdigit(*it))
            this->_stack.push(*it - '0');
        else if(*it == '*' || *it == '/' || *it == '+' || *it == '-')
        {
            int right = this->_stack.top();
            this->_stack.pop();
            int left = this->_stack.top();
            this->_stack.pop();
            if(*it == '*')
            {
                int result = left * right;
                this->_stack.push(result);
            }
            else if(*it == '+')
            {
                int result = left + right;
                this->_stack.push(result);
            }
            else if(*it == '-')
            {
                int result = left - right;
                this->_stack.push(result);
            }
            else if(*it == '/')
            {
                int result = left / right;
                this->_stack.push(result);
            }
        }
        else
        {
            std::cerr << "Error: Invalid string" << std::endl;
            return 1;
        }
    }
    return 0;
    
}

