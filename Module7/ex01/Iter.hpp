#pragma once

#include <string>
#include <iostream>
#include <sys/types.h>
#include <stdint.h>


template<typename Input, typename Ft>
void iter(Input array, unsigned int size, Ft function)
{
    unsigned int count = 0;
    while(count < size)
    {
        function(array[count++]);
    }
}

//a = adrress of an array
//b = lenght of array
//c = ft to run on every element of array


