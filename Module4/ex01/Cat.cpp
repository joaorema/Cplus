#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Created one " << type << std::endl;
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destroyed one " << type << std::endl;
    delete(brain);
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

Cat::Cat(const Cat& other) : Animal(other)    //define animal
{
    if(this != &other)
    {
        brain = new Brain(*other.brain); //deep copy brain
    }
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        Animal::operator=(other);           //copy other animal
        delete (brain);                     //delete old brain
        brain = new Brain(*other.brain);    //copy new brain
    }
    return *this;
}