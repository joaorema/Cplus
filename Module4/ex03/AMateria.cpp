#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type (type)
{
    //std::cout << "Create Amateria with this type " << type << std::endl;
}

AMateria::~AMateria()
{
    //std::cout << "Destroyed Amateria" << std::endl;
}

//getters and setter

std::string const & AMateria::getType()const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}