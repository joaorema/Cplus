#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Created one " << type << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destroyed one " << type << std::endl;
}

std::string Cat::getType()const
{
    return type;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

void Cat::makeSound() const
{
    std::cout << "Miau Miau" << std::endl;
}