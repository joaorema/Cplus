#include "Polymorph.hpp"


Polymorph::Polymorph() : AMateria("polymorph") 
{
    //std::cout << "Ice created" << std::endl;
}

Polymorph::~Polymorph()
{
    //std::cout << "Ice destroyed" << std::endl;
}

AMateria* Polymorph::clone()const
{
    return new Polymorph(*this);
}

void Polymorph::use(ICharacter& target)
{
    std::cout << "* turns " << target.getName() << " into a sheep *" << std::endl;
}