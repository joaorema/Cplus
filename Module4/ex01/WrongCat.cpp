#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "Wrongcat";
    std::cout << "Created one " << type << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destroyed one " << type << std::endl;
}

std::string WrongCat::getType()const 
{
    return type;
}

void WrongCat::makeSound()const 
{
    std::cout << "UAIM UAIM" << std::endl;
}