#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sys/types.h>
#include <stdint.h>

class Base
{
    public:
        virtual ~Base();
};


Base* generate(void);              //Stars a class at random . returns instance as a base pointer
void identify(Base* p);              //Print type of object pointed by class
void identify(Base& p);             //Print type of object referenced by class
