#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{   
}

Base* generate(void)                //Stars a class at random . returns instance as a base pointer
{
    srand(static_cast<unsigned>(time(NULL)));              //srand generates random seed
    int nbr = rand() % 3;                                  //generates 3 options (0, 1, 2)
    switch(nbr)
    {
        case 0 : return new A();
        case 1 : return new B();
        case 2 : return new C();
    }
    return NULL;
}

void identify(Base* p)              //Print type of object pointed by class
{
    if(p)
    {
        if(dynamic_cast<A*>(p))
            std::cout << "Ptr returned class A" << std::endl;
        else if(dynamic_cast<B*>(p))
            std::cout << "Ptr returned class B" << std::endl;
        else
            std::cout << "Ptr returned class C" << std::endl;
    }
    else if(p == NULL)
    {
        std::cout << "Invalid Base ptr" << std::endl;
        return;
    }
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Reference returned A" << std::endl;
        return;
    }
    catch(std::exception &e) {}
    try
    {    
        (void)dynamic_cast<B&>(p);
        std::cout << "Reference returned B" << std::endl;
        return;
    }
    catch(std::exception &e) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Reference returned C" << std::endl;
        return;
    }
    catch(std::exception &e) {}
    std::cout << "Invalid, no class found" << std::endl;
}