#pragma once
#include <iostream>
#include <string>
#include <algorithm>

template<typename Container>
void easyFind(const Container &a, int b)
{
    typename Container::const_iterator n = std::find(a.begin(), a.end(), b);    //create a iterator to run the vector from begin-to end and find the nb
    
    if(n != a.end())                                                            //if we did not run the full container and found value
    {
        std::cout << "Found the value " << b << std::endl;
        return;
    }
    else
    {
        std::cout << "Cannot find the value " << b << " in the vector" << std::endl;
        return; 
    }
    
};
