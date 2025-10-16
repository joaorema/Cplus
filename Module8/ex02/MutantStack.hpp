#pragma once

#include <string>
#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>                    //its public std stack with T
{
    protected:

    private:
        
    public:
        //Typedef so we can call them                                       //member object from std::stack = c 
        typedef typename std::stack<T>::container_type::iterator ite;
        typedef typename std::stack<T>::container_type::const_iterator const_ite;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_ite;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_it;

        ite begin()                                                       //iterates from start
        {
            return this->c.begin();
        }
        ite end()                                                           //iterates from end
        {
            return this->c.end();
        }
        const_ite cbegin()
        {
            return this->c.begin();
        }
        const_ite cend()
        {
            return this->c.end();
        }
        reverse_ite rbegin()
        {
            return this->c.rbegin();
        }
        reverse_ite rend()
        {
            return this->c.rend();
        }
        const_reverse_it crbegin()
        {
            return this->c.crbegind();
        }
        const_reverse_it crend()
        {
            return this->c.crend();
        }



};