#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Created one " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destroyed one " << type << std::endl;
}

std::string WrongAnimal::getType()const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal makes a weird noise" << std::endl;
}
