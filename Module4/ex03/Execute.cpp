#include "Execute.hpp"


Execute::Execute() : AMateria("execute") 
{
    //std::cout << "Execute created" << std::endl;
}

Execute::~Execute()
{
    //std::cout << "Execute destroyed" << std::endl;
}

AMateria* Execute::clone()const
{
    return new Execute(*this);
}

void Execute::use(ICharacter& target)
{
    (void)target;
    std::cout << "* Bob uses Execute and kills the program!!! *" << std::endl;
}