#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Created one " << type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destroyed one " << type << std::endl;
}

std::string Dog::getType()const
{
    return type;
}

void Dog::setType(std::string type)
{
    this->type = type;
}

void Dog::makeSound()const
{
    std::cout << "Woof Woof" << std::endl;
}
