#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
     //std::cout << "Cure created" << std::endl;
}

Cure::~Cure()
{
     //std::cout << "Cure Destroyed" << std::endl;
}

AMateria* Cure::clone()const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
