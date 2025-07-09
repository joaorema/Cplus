#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Created one " << type << std::endl;
    brain = new Brain();
}

Dog::~Dog()
{
    delete(brain);
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

Dog::Dog(const Dog& other)
{
    if(this != &other)
    {
        brain = new Brain(*other.brain);
    }
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete (brain);
        brain = new Brain(*other.brain);
    }
    return *this;
}


std::string Dog::getIdea(int index) const 
{
    return brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea)
{
    brain->setIdeia(index, idea);
}