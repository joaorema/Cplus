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

Animal::Animal(const Animal& other)
{
        type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
        type = other.type;
    return *this;
}