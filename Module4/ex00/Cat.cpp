#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Created a cat" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << this->type << " was created " << std::endl;
}

Cat::~Cat()
{
   // std::cout << this->type << " was destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MIAU MIAU MIAU" << std::endl;
}