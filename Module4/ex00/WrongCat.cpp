#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Created a Wrongcat" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
    std::cout << this->type << " was created " << std::endl;
}

WrongCat::~WrongCat()
{
   // std::cout << this->type << " was destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Moo Moo" << std::endl;
}