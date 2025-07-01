#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "Primary Class Animal created" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal Destroyed" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound()const
{
    std::cout << "General Animal Noise" << std::endl;
}