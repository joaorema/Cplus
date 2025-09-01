#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include <sys/types.h>


#define      RED		 "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


class Serializer
{
    private:                                          //cant be initialized
        Serializer();
        ~Serializer();

        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
    public:

        static uintptr_t serialize(Data* ptr);             //takes ptr to data and returns unsigned integer type uintptr
        static Data* deserialize(uintptr_t raw);           //takes unsigned integer and returns ptr do Data 
};
