#include "Base.hpp"


int main()
{

    Base* one = generate();
    Base* two = NULL;
    Base* three = generate();

    std::cout << "Lets check identify with ptrs" << std::endl;

    identify(*one);
    identify(*three);
    identify(*two);

    std::cout << "Now lets try with reference" << std::endl;

    identify(one);
    identify(three);
    identify(two);

    delete one;
    delete two;
    delete three;
}