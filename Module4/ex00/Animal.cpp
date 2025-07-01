#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << type << " was created" << std::endl;
}

Animal::~Animal()
{
    std::cout << type <<  " destroyed" << std::endl;
}


std::string Animal::getType()const
{
    return type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound()const
{
    std::cout << "Generic animal noise" << std::endl;
}