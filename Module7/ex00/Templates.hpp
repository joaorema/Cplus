#pragma once

#include <string>
#include <iostream>
#include <sys/types.h>
#include <stdint.h>


template<typename Input>
void swap(Input &a, Input &b)
{
    //std::cout << "Value of A: " << a << " Value of B: " << b << std::endl;
    Input temp = a;
    a = b;
    b = temp;
    //std::cout << "After swap value of A: " << a << " value of B: " << b << std::endl;

}

template<typename Input>
Input min(Input a, Input b)
{
    if(a > b)
        return b;
    else
        return a;
}

template<typename Input>
Input max(Input a, Input b)
{
    if(a > b)
        return a;
    else
        return b;
}