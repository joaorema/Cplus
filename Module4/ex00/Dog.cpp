#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    std::cout << "Created a dog" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << this->type << " was created " << std::endl;
}

Dog::~Dog()
{
    //std::cout << this->type << " was destroyed" << std::endl;
}

void Dog::makeSound()const 
{
    std::cout << "WOOF WOOF" << std::endl;
}