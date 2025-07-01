#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << type << " was created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << type <<  " destroyed" << std::endl;
}


std::string WrongAnimal::getType()const
{
    return type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "Moo Moo" << std::endl;
}